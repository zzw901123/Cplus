# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/finley/code/C++/std/tie

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/finley/code/C++/std/tie/build

# Include any dependencies generated for this target.
include CMakeFiles/tie.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tie.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tie.dir/flags.make

CMakeFiles/tie.dir/tie.cpp.o: CMakeFiles/tie.dir/flags.make
CMakeFiles/tie.dir/tie.cpp.o: ../tie.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/finley/code/C++/std/tie/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tie.dir/tie.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tie.dir/tie.cpp.o -c /home/finley/code/C++/std/tie/tie.cpp

CMakeFiles/tie.dir/tie.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tie.dir/tie.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/finley/code/C++/std/tie/tie.cpp > CMakeFiles/tie.dir/tie.cpp.i

CMakeFiles/tie.dir/tie.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tie.dir/tie.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/finley/code/C++/std/tie/tie.cpp -o CMakeFiles/tie.dir/tie.cpp.s

# Object files for target tie
tie_OBJECTS = \
"CMakeFiles/tie.dir/tie.cpp.o"

# External object files for target tie
tie_EXTERNAL_OBJECTS =

tie: CMakeFiles/tie.dir/tie.cpp.o
tie: CMakeFiles/tie.dir/build.make
tie: CMakeFiles/tie.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/finley/code/C++/std/tie/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tie"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tie.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tie.dir/build: tie

.PHONY : CMakeFiles/tie.dir/build

CMakeFiles/tie.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tie.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tie.dir/clean

CMakeFiles/tie.dir/depend:
	cd /home/finley/code/C++/std/tie/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/finley/code/C++/std/tie /home/finley/code/C++/std/tie /home/finley/code/C++/std/tie/build /home/finley/code/C++/std/tie/build /home/finley/code/C++/std/tie/build/CMakeFiles/tie.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tie.dir/depend
