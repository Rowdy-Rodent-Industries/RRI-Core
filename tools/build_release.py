#!/usr/bin/env python3
# File: build_release.py
# Author: Mokka
#
# Description: Script run help run through the release process for this mod.
#
# Usage: python ./tools/build_release.py
#
###############################################################################

# The MIT License (MIT)

# Copyright (c) 2025-2025 Mokka

# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:

# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.

# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.

###############################################################################

__version__ = "0.1"

import sys

if sys.version_info[0] == 2:
    print("Python 3 is required.")
    sys.exit(1)

import subprocess
import os
import argparse
import re

# Set Globals
root_dir = ""
enable_trace = False

############################################################
# Utility functions
# Copyright (c) André Burgaud
# http://www.burgaud.com/bring-colors-to-the-windows-console-with-python/
if sys.platform == "win32":
    from ctypes import windll, Structure, c_short, c_ushort, byref

    SHORT = c_short
    WORD = c_ushort

    class COORD(Structure):
      """struct in wincon.h."""
      _fields_ = [
        ("X", SHORT),
        ("Y", SHORT)]

    class SMALL_RECT(Structure):
      """struct in wincon.h."""
      _fields_ = [
        ("Left", SHORT),
        ("Top", SHORT),
        ("Right", SHORT),
        ("Bottom", SHORT)]

    class CONSOLE_SCREEN_BUFFER_INFO(Structure):
      """struct in wincon.h."""
      _fields_ = [
        ("dwSize", COORD),
        ("dwCursorPosition", COORD),
        ("wAttributes", WORD),
        ("srWindow", SMALL_RECT),
        ("dwMaximumWindowSize", COORD)]

    # winbase.h
    STD_INPUT_HANDLE = -10
    STD_OUTPUT_HANDLE = -11
    STD_ERROR_HANDLE = -12

    # wincon.h
    FOREGROUND_BLACK     = 0x0000
    FOREGROUND_BLUE      = 0x0001
    FOREGROUND_GREEN     = 0x0002
    FOREGROUND_CYAN      = 0x0003
    FOREGROUND_RED       = 0x0004
    FOREGROUND_MAGENTA   = 0x0005
    FOREGROUND_YELLOW    = 0x0006
    FOREGROUND_GREY      = 0x0007
    FOREGROUND_INTENSITY = 0x0008 # foreground color is intensified.

    BACKGROUND_BLACK     = 0x0000
    BACKGROUND_BLUE      = 0x0010
    BACKGROUND_GREEN     = 0x0020
    BACKGROUND_CYAN      = 0x0030
    BACKGROUND_RED       = 0x0040
    BACKGROUND_MAGENTA   = 0x0050
    BACKGROUND_YELLOW    = 0x0060
    BACKGROUND_GREY      = 0x0070
    BACKGROUND_INTENSITY = 0x0080 # background color is intensified.

    stdout_handle = windll.kernel32.GetStdHandle(STD_OUTPUT_HANDLE)
    SetConsoleTextAttribute = windll.kernel32.SetConsoleTextAttribute
    GetConsoleScreenBufferInfo = windll.kernel32.GetConsoleScreenBufferInfo

    def get_text_attr():
      """Returns the character attributes (colors) of the console screen
      buffer."""
      csbi = CONSOLE_SCREEN_BUFFER_INFO()
      GetConsoleScreenBufferInfo(stdout_handle, byref(csbi))
      return csbi.wAttributes

    def set_text_attr(color):
      """Sets the character attributes (colors) of the console screen
      buffer. Color is a combination of foreground and background color,
      foreground and background intensity."""
      SetConsoleTextAttribute(stdout_handle, color)

def color(color):
    """Set the color. Works on Win32 and normal terminals."""
    if sys.platform == "win32":
        if color == "green":
            set_text_attr(FOREGROUND_GREEN | get_text_attr() & 0x0070 | FOREGROUND_INTENSITY)
        elif color == "yellow":
            set_text_attr(FOREGROUND_YELLOW | get_text_attr() & 0x0070 | FOREGROUND_INTENSITY)
        elif color == "red":
            set_text_attr(FOREGROUND_RED | get_text_attr() & 0x0070 | FOREGROUND_INTENSITY)
        elif color == "blue":
            set_text_attr(FOREGROUND_BLUE | get_text_attr() & 0x0070 | FOREGROUND_INTENSITY)
        elif color == "magenta":
            set_text_attr(FOREGROUND_MAGENTA | get_text_attr() & 0x0070 | FOREGROUND_INTENSITY)
        elif color == "reset":
            set_text_attr(FOREGROUND_GREY | get_text_attr() & 0x0070)
        elif color == "grey":
            set_text_attr(FOREGROUND_GREY | get_text_attr() & 0x0070)
    else :
        if color == "green":
            sys.stdout.write('\033[92m')
        elif color == "red":
            sys.stdout.write('\033[91m')
        elif color == "blue":
            sys.stdout.write('\033[94m')
        elif color == "reset":
            sys.stdout.write('\033[0m')
        elif color == "yellow":
            sys.stdout.write('\033[33m')
        elif color == "magenta":
            sys.stdout.write('\033[35m')

def print_error(msg):
    color("red")
    print ("ERROR: {}".format(msg))
    color("reset")

def print_warning(msg):
    color("yellow")
    print ("WARNING: {}".format(msg))
    color("reset")

def print_trace(msg):
    if (not enable_trace):
        return
    color("magenta")
    print ("TRACE: {}".format(msg))
    color("reset")

def print_green(msg):
    color("green")
    print(msg)
    color("reset")

def print_blue(msg):
    color("blue")
    print(msg)
    color("reset")
############################################################

def grab_version(dir):
    version_file = os.path.join(dir,"addons","main","script_version.hpp")
    version = []
    strip_nrs = re.compile(r"^\D+", re.DOTALL)

    if (not os.path.isfile(version_file)):
        return None

    try:
        with open(version_file, 'r', encoding='utf-8') as f:
            for line in f.readlines():
                if (not "BUILD" in line):
                    nr = strip_nrs.match(line)
                    if nr:
                        version.append(line[nr.end():].strip())
    except Exception as err:
        print_error("Could not read file {}, exception: {}".format(version_file,err))

    return '.'.join(version)

def main(argv):
    print_blue("## build_release.py, version {} ##\n".format(__version__))

    # parse args
    parser = argparse.ArgumentParser(description="This script takes you through the process for preparing a new release of this mod.",usage="release.py directory patch_level [OPTIONS]")
    parser.add_argument('directory',nargs='?',help='directory to operate on',default='.')
    parser.add_argument('patch_level',nargs='?',help='patch level (patch, minor, major)',default='patch')
    parser.add_argument('-v', '--verbose',help='enables tracel-level logging',action='store_true')
    parser.add_argument('--skip-gh',help='skip updating the ground holders',action='store_true')
    parser.add_argument('-l', '--launch',help='overwrite the hemtt launch preset to use',default='v2')
    args = parser.parse_args()

    global enable_trace
    enable_trace = args.verbose

    global root_dir
    root_dir = os.path.abspath(args.directory)
    print_trace("setting root_dir to {}".format(root_dir))

    global patch_level
    patch_level = args.patch_level
    print_trace("setting patch_level to {}".format(patch_level))

    global skip_gh
    skip_gh = args.skip_gh
    print_trace("setting skip_gh to {}".format(skip_gh))

    global launch
    launch = args.launch
    print_trace("setting launch to {}".format(launch))

    if (not patch_level in ["patch","minor","major"]):
        print_error("Invalid patch level '{}', must be one of 'patch','minor','major'!".format(patch_level))
        sys.exit(1)

    if (not os.path.exists(root_dir)):
        print_error("The specified directory does not exist: {}".format(root_dir))
        sys.exit(1)
    
    if (not os.path.isdir(root_dir)):
        print_error("The specified directory is not a directory: {}".format(root_dir))
        sys.exit(1)

    # step 1: check for hemtt
    try:
        subprocess.run(["hemtt"], capture_output=True)
    except FileNotFoundError:
        print_error("hemtt binary could not be found!")
        sys.exit(1)
    print_trace("hemtt binary found")

    # step 2: get old version
    version_old = grab_version(root_dir)
    if (version_old is None):
        print_error("Could not obtain version information from project!")
        sys.exit(1)
    print_trace("old version is {}".format(version_old))

    # step 3: run version script
    print_blue("Running 'hemtt script {}' to update project version...".format(patch_level))
    try:
        subprocess.run(["hemtt","script",patch_level], capture_output=True, check=True)
    except subprocess.CalledProcessError:
        print_error("Could not update project version using 'hemtt script {}'!".format(patch_level))
        sys.exit(1)

    # step 4: grab new version
    version_new = grab_version(root_dir)
    if (version_new is None):
        print_error("Could not obtain version information from project!")
        sys.exit(1)
    print_trace("new version is {}".format(version_new))

    print_blue("Project version updated from {} to {}".format(version_old,version_new))

    # step 5a: run hemtt launch with prompt to grab ground holders
    if skip_gh:
        print_blue ("\nSkipping ground holder update...")
    else:
        print_blue("\nRunning 'hemtt launch {}' to update ground holders...".format(launch))
        try:
            subprocess.run(["hemtt","launch",launch], check=True)
        except subprocess.CalledProcessError:
            print_error("Failed to run 'hemtt launch {}'!".format(launch))
            sys.exit(1) # exit now, no use continuing if build fails already

        # step 5b: call upon write_ground_holders.py
        print_blue("Running 'write_ground_holders.py' to complete GH updates...")
        try:
            subprocess.run(["python",os.path.join(root_dir,"tools","write_ground_holders.py")], check=True)
        except subprocess.CalledProcessError:
            print_warning("Failed to update ground holders!")
            # allow the script to continue working, for now

    # step 6: build and update config_lists & xtdgearmodels
    print_blue("\nBuilding project to update config_lists.hpp and XtdGearModels.hpp files...")
    try:
        subprocess.run(["hemtt","build"],check=True,capture_output=True)
    except subprocess.CalledProcessError:
        print_error("Failed to build project using hemtt!")
        sys.exit(1)

    try:
        subprocess.run(["python",os.path.join(root_dir,"tools","write_config_lists.py")],check=True)
    except subprocess.CalledProcessError:
        print_warning("Failed to update config_lists.hpp files!")

    try:
        subprocess.run(["python",os.path.join(root_dir,"tools","write_aceax_compat.py")],check=True)
    except subprocess.CalledProcessError:
        print_warning("Failed to update XtdGearModels.hpp files!")

    # step 7: build again and run checkers
    print_blue("\nBuilding project to run paths and classes checkers...")
    try:
        subprocess.run(["hemtt","build"],check=True,capture_output=True)
    except subprocess.CalledProcessError:
        print_error("Failed to build project using hemtt!")
        sys.exit(1)

    try:
        subprocess.run(["python",os.path.join(root_dir,"tools","check_classes.py")],check=True)
    except subprocess.CalledProcessError:
        print_warning("Class checker returned errors!")

    try:
        subprocess.run(["python",os.path.join(root_dir,"tools","check_paths.py"),"--skip-no-extension"],check=True)
    except subprocess.CalledProcessError:
        print_warning("Paths checker returned errors!")

    # step 8: Run hemtt release
    print_blue("\nCreating release build...")
    try:
        subprocess.run(["hemtt","release","--no-archive"],check=True)
    except subprocess.CalledProcessError:
        print_error("Failed to build release version of project using hemtt!")
        sys.exit(1)

    # step 9: Git tag
    print_blue("\nRelease build successful, creating git tag")
    try:
        subprocess.run(["git","tag",version_new],check=True)
        subprocess.run(["git","push","--tags"],check=True)
    except subprocess.CalledProcessError:
        print_warning("Could not create git tag!")


    print_green("Succesfully created release build, {} -> {}".format(version_old,version_new))
    sys.exit(0)


if __name__ == "__main__":
    main(sys.argv)

