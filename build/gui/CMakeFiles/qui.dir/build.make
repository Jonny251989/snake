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

# Include any dependencies generated for this target.
include gui/CMakeFiles/qui.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include gui/CMakeFiles/qui.dir/compiler_depend.make

# Include the progress variables for this target.
include gui/CMakeFiles/qui.dir/progress.make

# Include the compile flags for this target's objects.
include gui/CMakeFiles/qui.dir/flags.make

gui/CMakeFiles/qui.dir/qui_autogen/mocs_compilation.cpp.o: gui/CMakeFiles/qui.dir/flags.make
gui/CMakeFiles/qui.dir/qui_autogen/mocs_compilation.cpp.o: gui/qui_autogen/mocs_compilation.cpp
gui/CMakeFiles/qui.dir/qui_autogen/mocs_compilation.cpp.o: gui/CMakeFiles/qui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/vs_code/m_snake/snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object gui/CMakeFiles/qui.dir/qui_autogen/mocs_compilation.cpp.o"
	cd /home/ivan/vs_code/m_snake/snake/build/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT gui/CMakeFiles/qui.dir/qui_autogen/mocs_compilation.cpp.o -MF CMakeFiles/qui.dir/qui_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/qui.dir/qui_autogen/mocs_compilation.cpp.o -c /home/ivan/vs_code/m_snake/snake/build/gui/qui_autogen/mocs_compilation.cpp

gui/CMakeFiles/qui.dir/qui_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qui.dir/qui_autogen/mocs_compilation.cpp.i"
	cd /home/ivan/vs_code/m_snake/snake/build/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/vs_code/m_snake/snake/build/gui/qui_autogen/mocs_compilation.cpp > CMakeFiles/qui.dir/qui_autogen/mocs_compilation.cpp.i

gui/CMakeFiles/qui.dir/qui_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qui.dir/qui_autogen/mocs_compilation.cpp.s"
	cd /home/ivan/vs_code/m_snake/snake/build/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/vs_code/m_snake/snake/build/gui/qui_autogen/mocs_compilation.cpp -o CMakeFiles/qui.dir/qui_autogen/mocs_compilation.cpp.s

# Object files for target qui
qui_OBJECTS = \
"CMakeFiles/qui.dir/qui_autogen/mocs_compilation.cpp.o"

# External object files for target qui
qui_EXTERNAL_OBJECTS =

gui/libqui.a: gui/CMakeFiles/qui.dir/qui_autogen/mocs_compilation.cpp.o
gui/libqui.a: gui/CMakeFiles/qui.dir/build.make
gui/libqui.a: gui/CMakeFiles/qui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ivan/vs_code/m_snake/snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libqui.a"
	cd /home/ivan/vs_code/m_snake/snake/build/gui && $(CMAKE_COMMAND) -P CMakeFiles/qui.dir/cmake_clean_target.cmake
	cd /home/ivan/vs_code/m_snake/snake/build/gui && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gui/CMakeFiles/qui.dir/build: gui/libqui.a
.PHONY : gui/CMakeFiles/qui.dir/build

gui/CMakeFiles/qui.dir/clean:
	cd /home/ivan/vs_code/m_snake/snake/build/gui && $(CMAKE_COMMAND) -P CMakeFiles/qui.dir/cmake_clean.cmake
.PHONY : gui/CMakeFiles/qui.dir/clean

gui/CMakeFiles/qui.dir/depend:
	cd /home/ivan/vs_code/m_snake/snake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ivan/vs_code/m_snake/snake /home/ivan/vs_code/m_snake/snake/gui /home/ivan/vs_code/m_snake/snake/build /home/ivan/vs_code/m_snake/snake/build/gui /home/ivan/vs_code/m_snake/snake/build/gui/CMakeFiles/qui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gui/CMakeFiles/qui.dir/depend

