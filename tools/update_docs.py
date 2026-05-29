#!/usr/bin/env python3
# File: update_docs.py
# Author: Mokka
#
# Description: Script to update the documentation files for MokTech addons.
#
# Usage: python ./tools/update_docs.py
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
import shutil

# Set Globals
root_dir = ""
enable_trace = False
arg_pattern = re.compile(r"^[\s]*(_[a-zA-Z]*)", re.DOTALL)

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

class FunctionHeader:
    def __init__(self, name, description, arguments, returns, example, author, isInternal):
        self.name = name
        self.description = description
        self.arguments = arguments
        self.returns = returns
        self.example = example
        self.author = author
        self.isInternal = isInternal
    
    def __init__(self,str):
        self.name = ""
        self.description = ""
        self.arguments = []
        self.returns = ""
        self.example = ""
        self.author = ""
        self.isInternal = False

        lines = str.splitlines()
        current_section = None
        for line in lines:
            line = line.strip()
            if line.startswith("Function:"):
                self.name = line[len("Function:"):].strip()
                current_section = None
            elif line.startswith("Description:"):
                self.description = line[len("Description:"):].strip()
                current_section = "description"
            elif line.startswith("Arguments:") or line.startswith("Parameters:"):
                current_section = "arguments"
            elif line.startswith("Return Value:") or line.startswith("Returns:") or line.startswith("Return Values:"):
                self.returns = line[len("Return Value:"):].strip()
                current_section = "returns"
            elif line.startswith("Example:"):
                self.example = line[len("Example:"):].strip()
                current_section = "example"
            elif line.startswith("Author:"):
                self.author = line[len("Author:"):].strip()
                current_section = "author"
            elif line.startswith("Internal:"):
                internal_str = line[len("Internal:"):].strip().lower()
                self.isInternal = (internal_str == "true" or internal_str == "yes" or internal_str == "1")
                current_section = None
            else:
                if current_section == "description":
                    self.description += line + " "
                elif current_section == "author":
                    self.author += line + " "
                elif current_section == "returns":
                    self.returns += line + " "
                elif current_section == "arguments":
                    if line:
                        self.arguments.append(line)
                elif current_section == "example":
                    self.example += "\n" + line
    
    def __str__(self):
        md = f"## {self.name}\n\n"
        md += f"**Description:** {self.description}\n\n"
        if self.arguments:
            md += "**Arguments:**\n"
            for arg in self.arguments:
                arg_match = arg_pattern.match(arg)
                if arg_match:
                    arg_name = arg_match.group(1)
                    arg_rest = arg[len(arg_name):].strip()
                    md += f"- `{arg_name}` {arg_rest}\n"
                else:
                    md += f"- {arg}\n"
            md += "\n"
        if self.returns:
            md += f"**Return Value:** {self.returns}\n\n"
        if self.example:
            md += "**Example:**\n"
            md += "```\n"
            md += f"{self.example}\n"
            md += "```\n\n"
        if self.author:
            md += f"**Author:** {self.author}\n\n"
        return md

def collect_md_files(directory):
    md_files = []
    for dirpath, dirnames, filenames in os.walk(directory):
        for filename in filenames:
            if filename.endswith(".md"):
                full_path = os.path.join(dirpath, filename)
                rel_path = os.path.relpath(full_path, directory)
                if ("docs" in rel_path):
                    print_trace("Skipping docs file: {}".format(rel_path))
                    continue
                if ("extras" in rel_path):
                    print_trace("Skipping template file: {}".format(rel_path))
                    continue
                if ("todo" in filename.lower()):
                    print_trace("Skipping todo file: {}".format(rel_path))
                    continue
                md_files.append((full_path, rel_path))
                print_trace("Found markdown file: {}".format(rel_path))
    return sorted(md_files, key=lambda x: x[0].lower())

def copy_and_rename_files(md_files, output_dir):
    for full_path, rel_path in md_files:
        dest_path = os.path.join(output_dir, rel_path)
        dest_dir = os.path.dirname(dest_path)
        if not os.path.exists(dest_dir):
            os.makedirs(dest_dir)
            print_trace("Created directory: {}".format(dest_dir))
        try:
            with open(full_path, 'r', encoding='utf-8') as src_file:
                content = src_file.read()
            with open(dest_path, 'w', encoding='utf-8') as dest_file:
                dest_file.write(content)
            print_trace("Copied {} to {}".format(rel_path, dest_path))
        except Exception as e:
            print_error("Failed to copy {} to {}: {}".format(rel_path, dest_path, e))

def write_toc(md_files, output_dir):
    toc_path = os.path.join(output_dir, "_sidebar.md")
    try:
        with open(toc_path, 'w', encoding='utf-8') as toc_file:
            toc_file.write("- [Overview]({})\n".format(os.path.join(prefix, "README.md").replace("\\", "/")))
            for dirpath, dirnames, filenames in sorted(os.walk(output_dir), key=lambda x: x[0].lower()):
                rel_dir = os.path.relpath(dirpath, output_dir)
                if rel_dir == ".":
                    rel_dir = ""
                else:
                    sub_dirs = rel_dir.split(os.sep)
                    print_trace("Processing directory for TOC: {}".format(sub_dirs))
                    if len(sub_dirs) == 2:
                        toc_file.write("  - **[{}]({})**\n".format(sub_dirs[1].replace("\\", "/"), os.path.join(prefix, rel_dir, "README.md").replace("\\", "/")))
                    elif len(sub_dirs) == 3:
                        toc_file.write("    - **[{}]({})**\n".format(sub_dirs[1].replace("\\", "/") + "_" + sub_dirs[2], os.path.join(prefix, rel_dir, "README.md").replace("\\", "/")))
                    else:
                        toc_file.write("- **{}**\n".format(sub_dirs[0].replace("\\", "/")))
                for filename in sorted(filenames):
                    if filename.startswith("_"):
                        continue
                    if filename.endswith(".md"):
                        if (filename.lower() == "readme.md"):
                            continue
                        file_path = os.path.join(prefix, rel_dir, filename).replace("\\", "/")
                        display_name = filename[:-3].replace("_", " ").title()
                        if rel_dir != "":
                            sub_dirs = rel_dir.split(os.sep)
                            if len(sub_dirs) == 2:
                                toc_file.write("    - [{}]({})\n".format(display_name, file_path))
                            elif len(sub_dirs) == 3:
                                toc_file.write("      - [{}]({})\n".format(display_name, file_path))
                        else:
                            toc_file.write("- [{}]({})\n".format(display_name, file_path))
        print_trace("Wrote TOC to {}".format(toc_path))
    except Exception as e:
        print_error("Failed to write TOC to {}: {}".format(toc_path, e))

def collect_function_files(directory):
    function_files = []
    for dirpath, dirnames, filenames in os.walk(directory):
        for filename in filenames:
            if filename.endswith(".sqf") and filename.startswith("fnc_"):
                full_path = os.path.join(dirpath, filename)
                rel_path = os.path.relpath(full_path, directory)

                if (filename.lower() == "fnc_empty.sqf"):
                    print_trace("Skipping empty function file: {}".format(rel_path))
                    continue
                if ("include" in rel_path.lower()):
                    print_trace("Skipping include file: {}".format(rel_path))
                    continue
                function_files.append((full_path, rel_path))
                print_trace("Found function file: {}".format(rel_path))
    return sorted(function_files, key=lambda x: x[0].lower())

def sort_function_files_per_addon(function_files):
    addons = {}
    for full_path, rel_path, header in function_files:
        parts = rel_path.split(os.sep)
        if len(parts) < 2:
            print_warning("Function file {} is not in an addon directory.".format(rel_path))
            continue
        addon_name = parts[-3] # -1: filename, -2: functions/, -3: addon
        if (parts[-4].lower() != "addons"):
            addon_name = parts[-4] + os.sep + addon_name
        if addon_name not in addons:
            addons[addon_name] = []
        addons[addon_name].append((full_path, rel_path, header))
    print_trace("Parsed {} function files into addons: {}.".format(len(function_files),addons.keys()))
    return addons

def parse_function_headers(function_files):
    parsed_files = []
    header_pattern = re.compile(r"\/\*[\s]?(Function:[\s\S\n]*)\*\/", re.DOTALL)
    for full_path, rel_path in function_files:
        try:
            with open(full_path, 'r', encoding='utf-8') as f:
                content = f.read()
            match = header_pattern.search(content)
            if match:
                header = FunctionHeader(match.group(1).strip())
                print_trace("Parsed header for {}: {}".format(rel_path, header.name if header else "No header"))
            else:
                header = None
                print_warning("No header found in {}".format(rel_path))
            parsed_files.append((full_path, rel_path, header))
        except Exception as e:
            print_error("Failed to parse header in {}: {}".format(rel_path, e))
            parsed_files.append((full_path, rel_path, None))
    return parsed_files

def write_function_docs(function_files_by_addon, output_dir):
    # write a functions.md file for each addon sub directory
    functions_md_files = []
    for addon, files in function_files_by_addon.items():
        addon_dir = os.path.join(output_dir, "addons", addon)
        if not os.path.exists(addon_dir):
            os.makedirs(addon_dir)
            print_trace("Created directory for addon docs: {}".format(addon_dir))
        functions_md_path = os.path.join(addon_dir, "FUNCTIONS.md")
        try:
            with open(functions_md_path, 'w', encoding='utf-8') as f:
                f.write(f"# Function Reference\n\n")
                for full_path, rel_path, header in files:
                    if header is None:
                        f.write("## {}\n\nNo documentation available.\n\n".format(os.path.basename(full_path)))
                        continue
                    if header.isInternal:
                        f.write("## {}\n\n*This function is marked as internal and is not intended for public use.*\n\n".format(header.name))
                        continue
                    f.write(str(header))
            print_trace("Wrote function docs to {}".format(functions_md_path))
            functions_md_files.append((functions_md_path, os.path.relpath(functions_md_path, output_dir)))
        except Exception as e:
            print_error("Failed to write function docs to {}: {}".format(functions_md_path, e))
    return functions_md_files

def clean_output_dir(output_dir):
    if not os.path.exists(output_dir):
        return
    for dirpath, dirnames, filenames in os.walk(output_dir, topdown=False):
        for filename in filenames:
            if (filename == ".nojekyll") or (filename == "index.html"):
                continue
            file_path = os.path.join(dirpath, filename)
            try:
                os.remove(file_path)
                print_trace("Removed file: {}".format(file_path))
            except Exception as e:
                print_error("Failed to remove file {}: {}".format(file_path, e))
        for dirname in dirnames:
            dir_path = os.path.join(dirpath, dirname)
            if dir_path == output_dir:
                continue
            try:
                os.rmdir(dir_path)
                print_trace("Removed directory: {}".format(dir_path))
            except Exception as e:
                print_error("Failed to remove directory {}: {}".format(dir_path, e))

def main(argv):
    print_blue("## update_docs.py, version {} ##\n".format(__version__))

    # parse args
    parser = argparse.ArgumentParser(description="This script grabs documentation data from the project directory and outputs them into the specifiec output directory.")
    parser.add_argument('directory',nargs='?',help='directory to operate on',default='.')
    parser.add_argument('-o', '--output',help='file to write output to',default='docs/')
    parser.add_argument('-p', '--prefix',help='prefix to add to links',default='')
    parser.add_argument('-c', '--clean',help='cleans the output directory before writing',action='store_true')
    parser.add_argument('-v', '--verbose',help='enables tracel-level logging',action='store_true')
    args = parser.parse_args()

    global enable_trace
    enable_trace = args.verbose

    global output
    output = os.path.abspath(args.output)
    print_trace("setting output to {}".format(output))

    global root_dir
    root_dir = os.path.abspath(args.directory)
    print_trace("setting root_dir to {}".format(root_dir))

    global prefix
    prefix = args.prefix
    if (len(prefix) > 0) and (not prefix.endswith("/")):
        prefix += "/"
    print_trace("setting prefix to {}".format(prefix))

    global enable_clean
    enable_clean = args.clean
    print_trace("setting enable_clean to {}".format(enable_clean))

    if (not os.path.exists(root_dir)):
        print_error("The specified directory does not exist: {}".format(root_dir))
        sys.exit(1)
    
    if (not os.path.isdir(root_dir)):
        print_error("The specified directory is not a directory: {}".format(root_dir))
        sys.exit(1)
    
    if enable_clean:
        clean_output_dir(output)

    # collect md files along with their relative paths
    md_files = collect_md_files(root_dir)

    # copy and rename files to output directory
    copy_and_rename_files(md_files, output)

    # grab function files
    function_files = collect_function_files(root_dir)
    function_files = parse_function_headers(function_files)
    function_files_by_addon = sort_function_files_per_addon(function_files)

    md_files.append(write_function_docs(function_files_by_addon, output))

    # write toc to root readme.md
    write_toc(md_files, output)

    errors = []

    if (len(errors) == 0):
        print_green("Documentation successfully written to {}!".format(output))
        sys.exit(0)
    else:
        print_error("There were errors writing the documentation to {}".format(output))
        sys.exit(1)


if __name__ == "__main__":
    main(sys.argv)

