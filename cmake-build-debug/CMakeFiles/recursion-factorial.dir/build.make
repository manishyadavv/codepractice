# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/manishyadav/Downloads/untitled1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/manishyadav/Downloads/untitled1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/recursion-factorial.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/recursion-factorial.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/recursion-factorial.dir/flags.make

CMakeFiles/recursion-factorial.dir/recursion/recursion-factorial.cpp.o: CMakeFiles/recursion-factorial.dir/flags.make
CMakeFiles/recursion-factorial.dir/recursion/recursion-factorial.cpp.o: ../recursion/recursion-factorial.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/manishyadav/Downloads/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/recursion-factorial.dir/recursion/recursion-factorial.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/recursion-factorial.dir/recursion/recursion-factorial.cpp.o -c /Users/manishyadav/Downloads/untitled1/recursion/recursion-factorial.cpp

CMakeFiles/recursion-factorial.dir/recursion/recursion-factorial.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/recursion-factorial.dir/recursion/recursion-factorial.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/manishyadav/Downloads/untitled1/recursion/recursion-factorial.cpp > CMakeFiles/recursion-factorial.dir/recursion/recursion-factorial.cpp.i

CMakeFiles/recursion-factorial.dir/recursion/recursion-factorial.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/recursion-factorial.dir/recursion/recursion-factorial.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/manishyadav/Downloads/untitled1/recursion/recursion-factorial.cpp -o CMakeFiles/recursion-factorial.dir/recursion/recursion-factorial.cpp.s

# Object files for target recursion-factorial
recursion__factorial_OBJECTS = \
"CMakeFiles/recursion-factorial.dir/recursion/recursion-factorial.cpp.o"

# External object files for target recursion-factorial
recursion__factorial_EXTERNAL_OBJECTS =

recursion-factorial: CMakeFiles/recursion-factorial.dir/recursion/recursion-factorial.cpp.o
recursion-factorial: CMakeFiles/recursion-factorial.dir/build.make
recursion-factorial: CMakeFiles/recursion-factorial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/manishyadav/Downloads/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable recursion-factorial"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/recursion-factorial.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/recursion-factorial.dir/build: recursion-factorial

.PHONY : CMakeFiles/recursion-factorial.dir/build

CMakeFiles/recursion-factorial.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/recursion-factorial.dir/cmake_clean.cmake
.PHONY : CMakeFiles/recursion-factorial.dir/clean

CMakeFiles/recursion-factorial.dir/depend:
	cd /Users/manishyadav/Downloads/untitled1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/manishyadav/Downloads/untitled1 /Users/manishyadav/Downloads/untitled1 /Users/manishyadav/Downloads/untitled1/cmake-build-debug /Users/manishyadav/Downloads/untitled1/cmake-build-debug /Users/manishyadav/Downloads/untitled1/cmake-build-debug/CMakeFiles/recursion-factorial.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/recursion-factorial.dir/depend

