# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ivan/vs_code/m_snake/snake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ivan/vs_code/m_snake/snake/build

# Utility rule file for inputname_autogen.

# Include any custom commands dependencies for this target.
include menu/inputname/CMakeFiles/inputname_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include menu/inputname/CMakeFiles/inputname_autogen.dir/progress.make

menu/inputname/CMakeFiles/inputname_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ivan/vs_code/m_snake/snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target inputname"
	cd /home/ivan/vs_code/m_snake/snake/build/menu/inputname && /usr/bin/cmake -E cmake_autogen /home/ivan/vs_code/m_snake/snake/build/menu/inputname/CMakeFiles/inputname_autogen.dir/AutogenInfo.json ""

inputname_autogen: menu/inputname/CMakeFiles/inputname_autogen
inputname_autogen: menu/inputname/CMakeFiles/inputname_autogen.dir/build.make
.PHONY : inputname_autogen

# Rule to build all files generated by this target.
menu/inputname/CMakeFiles/inputname_autogen.dir/build: inputname_autogen
.PHONY : menu/inputname/CMakeFiles/inputname_autogen.dir/build

menu/inputname/CMakeFiles/inputname_autogen.dir/clean:
	cd /home/ivan/vs_code/m_snake/snake/build/menu/inputname && $(CMAKE_COMMAND) -P CMakeFiles/inputname_autogen.dir/cmake_clean.cmake
.PHONY : menu/inputname/CMakeFiles/inputname_autogen.dir/clean

menu/inputname/CMakeFiles/inputname_autogen.dir/depend:
	cd /home/ivan/vs_code/m_snake/snake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ivan/vs_code/m_snake/snake /home/ivan/vs_code/m_snake/snake/menu/inputname /home/ivan/vs_code/m_snake/snake/build /home/ivan/vs_code/m_snake/snake/build/menu/inputname /home/ivan/vs_code/m_snake/snake/build/menu/inputname/CMakeFiles/inputname_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : menu/inputname/CMakeFiles/inputname_autogen.dir/depend
