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
include menu/screenscores/CMakeFiles/screenscores.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include menu/screenscores/CMakeFiles/screenscores.dir/compiler_depend.make

# Include the progress variables for this target.
include menu/screenscores/CMakeFiles/screenscores.dir/progress.make

# Include the compile flags for this target's objects.
include menu/screenscores/CMakeFiles/screenscores.dir/flags.make

menu/screenscores/CMakeFiles/screenscores.dir/screenscores_autogen/mocs_compilation.cpp.o: menu/screenscores/CMakeFiles/screenscores.dir/flags.make
menu/screenscores/CMakeFiles/screenscores.dir/screenscores_autogen/mocs_compilation.cpp.o: menu/screenscores/screenscores_autogen/mocs_compilation.cpp
menu/screenscores/CMakeFiles/screenscores.dir/screenscores_autogen/mocs_compilation.cpp.o: menu/screenscores/CMakeFiles/screenscores.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/vs_code/m_snake/snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object menu/screenscores/CMakeFiles/screenscores.dir/screenscores_autogen/mocs_compilation.cpp.o"
	cd /home/ivan/vs_code/m_snake/snake/build/menu/screenscores && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT menu/screenscores/CMakeFiles/screenscores.dir/screenscores_autogen/mocs_compilation.cpp.o -MF CMakeFiles/screenscores.dir/screenscores_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/screenscores.dir/screenscores_autogen/mocs_compilation.cpp.o -c /home/ivan/vs_code/m_snake/snake/build/menu/screenscores/screenscores_autogen/mocs_compilation.cpp

menu/screenscores/CMakeFiles/screenscores.dir/screenscores_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/screenscores.dir/screenscores_autogen/mocs_compilation.cpp.i"
	cd /home/ivan/vs_code/m_snake/snake/build/menu/screenscores && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/vs_code/m_snake/snake/build/menu/screenscores/screenscores_autogen/mocs_compilation.cpp > CMakeFiles/screenscores.dir/screenscores_autogen/mocs_compilation.cpp.i

menu/screenscores/CMakeFiles/screenscores.dir/screenscores_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/screenscores.dir/screenscores_autogen/mocs_compilation.cpp.s"
	cd /home/ivan/vs_code/m_snake/snake/build/menu/screenscores && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/vs_code/m_snake/snake/build/menu/screenscores/screenscores_autogen/mocs_compilation.cpp -o CMakeFiles/screenscores.dir/screenscores_autogen/mocs_compilation.cpp.s

menu/screenscores/CMakeFiles/screenscores.dir/screenscores.cpp.o: menu/screenscores/CMakeFiles/screenscores.dir/flags.make
menu/screenscores/CMakeFiles/screenscores.dir/screenscores.cpp.o: ../menu/screenscores/screenscores.cpp
menu/screenscores/CMakeFiles/screenscores.dir/screenscores.cpp.o: menu/screenscores/CMakeFiles/screenscores.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/vs_code/m_snake/snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object menu/screenscores/CMakeFiles/screenscores.dir/screenscores.cpp.o"
	cd /home/ivan/vs_code/m_snake/snake/build/menu/screenscores && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT menu/screenscores/CMakeFiles/screenscores.dir/screenscores.cpp.o -MF CMakeFiles/screenscores.dir/screenscores.cpp.o.d -o CMakeFiles/screenscores.dir/screenscores.cpp.o -c /home/ivan/vs_code/m_snake/snake/menu/screenscores/screenscores.cpp

menu/screenscores/CMakeFiles/screenscores.dir/screenscores.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/screenscores.dir/screenscores.cpp.i"
	cd /home/ivan/vs_code/m_snake/snake/build/menu/screenscores && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/vs_code/m_snake/snake/menu/screenscores/screenscores.cpp > CMakeFiles/screenscores.dir/screenscores.cpp.i

menu/screenscores/CMakeFiles/screenscores.dir/screenscores.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/screenscores.dir/screenscores.cpp.s"
	cd /home/ivan/vs_code/m_snake/snake/build/menu/screenscores && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/vs_code/m_snake/snake/menu/screenscores/screenscores.cpp -o CMakeFiles/screenscores.dir/screenscores.cpp.s

# Object files for target screenscores
screenscores_OBJECTS = \
"CMakeFiles/screenscores.dir/screenscores_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/screenscores.dir/screenscores.cpp.o"

# External object files for target screenscores
screenscores_EXTERNAL_OBJECTS =

menu/screenscores/libscreenscores.a: menu/screenscores/CMakeFiles/screenscores.dir/screenscores_autogen/mocs_compilation.cpp.o
menu/screenscores/libscreenscores.a: menu/screenscores/CMakeFiles/screenscores.dir/screenscores.cpp.o
menu/screenscores/libscreenscores.a: menu/screenscores/CMakeFiles/screenscores.dir/build.make
menu/screenscores/libscreenscores.a: menu/screenscores/CMakeFiles/screenscores.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ivan/vs_code/m_snake/snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libscreenscores.a"
	cd /home/ivan/vs_code/m_snake/snake/build/menu/screenscores && $(CMAKE_COMMAND) -P CMakeFiles/screenscores.dir/cmake_clean_target.cmake
	cd /home/ivan/vs_code/m_snake/snake/build/menu/screenscores && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/screenscores.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
menu/screenscores/CMakeFiles/screenscores.dir/build: menu/screenscores/libscreenscores.a
.PHONY : menu/screenscores/CMakeFiles/screenscores.dir/build

menu/screenscores/CMakeFiles/screenscores.dir/clean:
	cd /home/ivan/vs_code/m_snake/snake/build/menu/screenscores && $(CMAKE_COMMAND) -P CMakeFiles/screenscores.dir/cmake_clean.cmake
.PHONY : menu/screenscores/CMakeFiles/screenscores.dir/clean

menu/screenscores/CMakeFiles/screenscores.dir/depend:
	cd /home/ivan/vs_code/m_snake/snake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ivan/vs_code/m_snake/snake /home/ivan/vs_code/m_snake/snake/menu/screenscores /home/ivan/vs_code/m_snake/snake/build /home/ivan/vs_code/m_snake/snake/build/menu/screenscores /home/ivan/vs_code/m_snake/snake/build/menu/screenscores/CMakeFiles/screenscores.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : menu/screenscores/CMakeFiles/screenscores.dir/depend

