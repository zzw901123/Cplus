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
CMAKE_SOURCE_DIR = /home/finley/code/C++/eigen/test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/finley/code/C++/eigen/test/build

# Include any dependencies generated for this target.
include CMakeFiles/EigenTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EigenTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EigenTest.dir/flags.make

CMakeFiles/EigenTest.dir/EigenTest.cpp.o: CMakeFiles/EigenTest.dir/flags.make
CMakeFiles/EigenTest.dir/EigenTest.cpp.o: ../EigenTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/finley/code/C++/eigen/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EigenTest.dir/EigenTest.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EigenTest.dir/EigenTest.cpp.o -c /home/finley/code/C++/eigen/test/EigenTest.cpp

CMakeFiles/EigenTest.dir/EigenTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EigenTest.dir/EigenTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/finley/code/C++/eigen/test/EigenTest.cpp > CMakeFiles/EigenTest.dir/EigenTest.cpp.i

CMakeFiles/EigenTest.dir/EigenTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EigenTest.dir/EigenTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/finley/code/C++/eigen/test/EigenTest.cpp -o CMakeFiles/EigenTest.dir/EigenTest.cpp.s

# Object files for target EigenTest
EigenTest_OBJECTS = \
"CMakeFiles/EigenTest.dir/EigenTest.cpp.o"

# External object files for target EigenTest
EigenTest_EXTERNAL_OBJECTS =

EigenTest: CMakeFiles/EigenTest.dir/EigenTest.cpp.o
EigenTest: CMakeFiles/EigenTest.dir/build.make
EigenTest: CMakeFiles/EigenTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/finley/code/C++/eigen/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EigenTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EigenTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EigenTest.dir/build: EigenTest

.PHONY : CMakeFiles/EigenTest.dir/build

CMakeFiles/EigenTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EigenTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EigenTest.dir/clean

CMakeFiles/EigenTest.dir/depend:
	cd /home/finley/code/C++/eigen/test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/finley/code/C++/eigen/test /home/finley/code/C++/eigen/test /home/finley/code/C++/eigen/test/build /home/finley/code/C++/eigen/test/build /home/finley/code/C++/eigen/test/build/CMakeFiles/EigenTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EigenTest.dir/depend

