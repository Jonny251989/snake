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

# Utility rule file for gamescreen_autogen.

# Include any custom commands dependencies for this target.
include menu/gamescreen/CMakeFiles/gamescreen_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include menu/gamescreen/CMakeFiles/gamescreen_autogen.dir/progress.make

menu/gamescreen/CMakeFiles/gamescreen_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ivan/vs_code/m_snake/snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target gamescreen"
	cd /home/ivan/vs_code/m_snake/snake/build/menu/gamescreen && /usr/bin/cmake -E cmake_autogen /home/ivan/vs_code/m_snake/snake/build/menu/gamescreen/CMakeFiles/gamescreen_autogen.dir/AutogenInfo.json ""

gamescreen_autogen: menu/gamescreen/CMakeFiles/gamescreen_autogen
gamescreen_autogen: menu/gamescreen/CMakeFiles/gamescreen_autogen.dir/build.make
.PHONY : gamescreen_autogen

# Rule to build all files generated by this target.
menu/gamescreen/CMakeFiles/gamescreen_autogen.dir/build: gamescreen_autogen
.PHONY : menu/gamescreen/CMakeFiles/gamescreen_autogen.dir/build

menu/gamescreen/CMakeFiles/gamescreen_autogen.dir/clean:
	cd /home/ivan/vs_code/m_snake/snake/build/menu/gamescreen && $(CMAKE_COMMAND) -P CMakeFiles/gamescreen_autogen.dir/cmake_clean.cmake
.PHONY : menu/gamescreen/CMakeFiles/gamescreen_autogen.dir/clean

menu/gamescreen/CMakeFiles/gamescreen_autogen.dir/depend:
	cd /home/ivan/vs_code/m_snake/snake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ivan/vs_code/m_snake/snake /home/ivan/vs_code/m_snake/snake/menu/gamescreen /home/ivan/vs_code/m_snake/snake/build /home/ivan/vs_code/m_snake/snake/build/menu/gamescreen /home/ivan/vs_code/m_snake/snake/build/menu/gamescreen/CMakeFiles/gamescreen_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : menu/gamescreen/CMakeFiles/gamescreen_autogen.dir/depend

