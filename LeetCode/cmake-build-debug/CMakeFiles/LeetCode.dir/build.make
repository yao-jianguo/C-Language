# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/LeetCode"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/LeetCode/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/LeetCode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LeetCode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LeetCode.dir/flags.make

CMakeFiles/LeetCode.dir/MedianOfTwoSortedArrays.c.o: CMakeFiles/LeetCode.dir/flags.make
CMakeFiles/LeetCode.dir/MedianOfTwoSortedArrays.c.o: ../MedianOfTwoSortedArrays.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/LeetCode/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LeetCode.dir/MedianOfTwoSortedArrays.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LeetCode.dir/MedianOfTwoSortedArrays.c.o   -c "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/LeetCode/MedianOfTwoSortedArrays.c"

CMakeFiles/LeetCode.dir/MedianOfTwoSortedArrays.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LeetCode.dir/MedianOfTwoSortedArrays.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/LeetCode/MedianOfTwoSortedArrays.c" > CMakeFiles/LeetCode.dir/MedianOfTwoSortedArrays.c.i

CMakeFiles/LeetCode.dir/MedianOfTwoSortedArrays.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LeetCode.dir/MedianOfTwoSortedArrays.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/LeetCode/MedianOfTwoSortedArrays.c" -o CMakeFiles/LeetCode.dir/MedianOfTwoSortedArrays.c.s

# Object files for target LeetCode
LeetCode_OBJECTS = \
"CMakeFiles/LeetCode.dir/MedianOfTwoSortedArrays.c.o"

# External object files for target LeetCode
LeetCode_EXTERNAL_OBJECTS =

LeetCode: CMakeFiles/LeetCode.dir/MedianOfTwoSortedArrays.c.o
LeetCode: CMakeFiles/LeetCode.dir/build.make
LeetCode: CMakeFiles/LeetCode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/LeetCode/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable LeetCode"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LeetCode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LeetCode.dir/build: LeetCode

.PHONY : CMakeFiles/LeetCode.dir/build

CMakeFiles/LeetCode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LeetCode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LeetCode.dir/clean

CMakeFiles/LeetCode.dir/depend:
	cd "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/LeetCode/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/LeetCode" "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/LeetCode" "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/LeetCode/cmake-build-debug" "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/LeetCode/cmake-build-debug" "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/LeetCode/cmake-build-debug/CMakeFiles/LeetCode.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/LeetCode.dir/depend

