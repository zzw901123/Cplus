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
CMAKE_SOURCE_DIR = /home/finley/code/C++/eigen/quaterniond

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/finley/code/C++/eigen/quaterniond/build

# Include any dependencies generated for this target.
include CMakeFiles/quaterniond_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/quaterniond_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/quaterniond_test.dir/flags.make

CMakeFiles/quaterniond_test.dir/quaterniond_test.cpp.o: CMakeFiles/quaterniond_test.dir/flags.make
CMakeFiles/quaterniond_test.dir/quaterniond_test.cpp.o: ../quaterniond_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/finley/code/C++/eigen/quaterniond/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/quaterniond_test.dir/quaterniond_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/quaterniond_test.dir/quaterniond_test.cpp.o -c /home/finley/code/C++/eigen/quaterniond/quaterniond_test.cpp

CMakeFiles/quaterniond_test.dir/quaterniond_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quaterniond_test.dir/quaterniond_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/finley/code/C++/eigen/quaterniond/quaterniond_test.cpp > CMakeFiles/quaterniond_test.dir/quaterniond_test.cpp.i

CMakeFiles/quaterniond_test.dir/quaterniond_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quaterniond_test.dir/quaterniond_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/finley/code/C++/eigen/quaterniond/quaterniond_test.cpp -o CMakeFiles/quaterniond_test.dir/quaterniond_test.cpp.s

# Object files for target quaterniond_test
quaterniond_test_OBJECTS = \
"CMakeFiles/quaterniond_test.dir/quaterniond_test.cpp.o"

# External object files for target quaterniond_test
quaterniond_test_EXTERNAL_OBJECTS =

quaterniond_test: CMakeFiles/quaterniond_test.dir/quaterniond_test.cpp.o
quaterniond_test: CMakeFiles/quaterniond_test.dir/build.make
quaterniond_test: CMakeFiles/quaterniond_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/finley/code/C++/eigen/quaterniond/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable quaterniond_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/quaterniond_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/quaterniond_test.dir/build: quaterniond_test

.PHONY : CMakeFiles/quaterniond_test.dir/build

CMakeFiles/quaterniond_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/quaterniond_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/quaterniond_test.dir/clean

CMakeFiles/quaterniond_test.dir/depend:
	cd /home/finley/code/C++/eigen/quaterniond/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/finley/code/C++/eigen/quaterniond /home/finley/code/C++/eigen/quaterniond /home/finley/code/C++/eigen/quaterniond/build /home/finley/code/C++/eigen/quaterniond/build /home/finley/code/C++/eigen/quaterniond/build/CMakeFiles/quaterniond_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/quaterniond_test.dir/depend

