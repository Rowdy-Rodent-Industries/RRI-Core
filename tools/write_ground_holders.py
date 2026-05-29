#!/usr/bin/env python3
# File: write_ground_holders.py
# Author: Mokka
#
# Description: Used to write ground holder data based on JSON exported by mti_common_fnc_grabGroundHolderData
#
# Usage: python ./tools/write_ground_holders.py
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

from yapbol import PBOFile
import os
import argparse
import io
import re
import struct
from utils import binary_handler
from utils import data_rap as rap
from tkinter import Tk
import json

# Set Globals
root_dir = ""
enable_trace = False
blacklist = ["muzzle"]

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


def read_json_from_clipboard():
    # read from clipboard first
    try:
        cb_data = Tk().clipboard_get()
    except:
        print_error("Could not read text from clipboard!")
        return {}

    try:
        json_data = json.loads(cb_data)
        print_trace(json_data.keys())
    except json.JSONDecodeError:
        print_error("Clipboard contents could not be decoded from JSON!")
        return {}

    return json_data

def is_gh_in_blacklist(gh):
    skip = False
    for b in blacklist:
        if (b in gh):
            skip = True
    return skip

def write_groundholders_to_file(gh_data):
    errors = []
    for idx, addon in enumerate(gh_data):
        print_trace("{}: {}".format(idx,addon))
        # skip addons w/o ghs
        if (len(gh_data[addon]) == 0):
            print_blue("Addon {} does not have ground holders, skipping...".format(addon))
            continue
        # first, parse file path based on addon name
        fp = get_path_from_addon(addon)
        if (fp is None):
            print_error("Failed to parse path for addon {}.".format(addon))
            errors.append(addon)
            continue
        if (not os.path.exists(fp)):
            print_error("Parsed path {} for addon {} does not exist.".format(fp,addon))
            errors.append(addon)

        # we have a valid path, write
        gh_file = os.path.join(fp, "groundholders.hpp")
        ghs = gh_data[addon]

        try:
            with open(gh_file, 'w', encoding='utf-8') as f:
                f.write("// This file is automatically generated by write_ground_holders.py\n")
                f.write("// Do not edit this file manually!\n\n")
                f.write("MACRO_GH_PREAMBLE;\n")
                for gh in ghs:
                    if (not is_gh_in_blacklist(gh)):
                        f.write(gh)
                        f.write("\n")
                    else:
                        print_trace("{} in blacklist {}, skipping...".format(gh, blacklist))
        except Exception as e:
            print_error("An error occurred while writing to file {}: {}".format(gh_file, e))
            errors.append(addon)
            continue
        print_blue("Successfully wrote {} ground holders to {}".format(len(ghs),gh_file))
    return errors

def get_path_from_addon(addon):
    # establish mod prefix based on pwd, kinda hacky, but eh...
    prefix = os.path.basename(root_dir)
    if (not prefix in addon):
        return None
    addon = addon[len(prefix)+1:]
    if (os.name == 'nt'):
        addon = addon.replace('_','\\')
    else:
        addon = addon.replace('_','/')
    fp = (os.path.join(root_dir,"addons",addon))
    print_trace("found file path for addon {}: {}".format(addon,fp))
    return fp

def main(argv):
    print_blue("## write_ground_holders.py, version {} ##\n".format(__version__))

    # parse args
    parser = argparse.ArgumentParser(description="This script writes ground holder macros to a file 'groundholders.hpp' based on data exported by mti_common_fnc_grabGroundHolderData")
    parser.add_argument('directory',nargs='?',help='directory to operate on',default='.')
    parser.add_argument('-v', '--verbose',help='enables tracel-level logging',action='store_true')
    args = parser.parse_args()
    global enable_trace
    enable_trace = args.verbose

    global root_dir
    root_dir = os.path.abspath(args.directory)
    print_trace("setting root_dir to {}".format(root_dir))

    errors = []

    # ask user to confirm that json data is in clipboard
    print_blue("\nThis script requires the output of the in-game function 'mti_common_fnc_grabGroundHolderData'.\nPlease run the function using the correct search prefix for this project.\nWait for the function to complete, the resulting ground holder data should be in your clipboard in JSON format.\n\nPlease confirm that your clipboard contains valid ground holder JSON data.")
    input("Press Enter to continue...")

    gh_data = read_json_from_clipboard()

    if (len(gh_data) == 0):
        print_error("No valid ground holder data found.")
        sys.exit(1)

    errors = write_groundholders_to_file(gh_data)

    if (len(errors) == 0):
        print_green("groundholders.hpp files successfully written!")
        sys.exit(0)
    else:
        print_error("Writing groundholders.hpp for one or more addons has failed: {}".format(errors))
        sys.exit(1)


if __name__ == "__main__":
    main(sys.argv)

