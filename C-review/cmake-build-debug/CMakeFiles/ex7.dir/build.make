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
CMAKE_SOURCE_DIR = "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ex7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex7.dir/flags.make

CMakeFiles/ex7.dir/1_basic_concept/ex7-指针数组.c.o: CMakeFiles/ex7.dir/flags.make
CMakeFiles/ex7.dir/1_basic_concept/ex7-指针数组.c.o: ../1_basic_concept/ex7-指针数组.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ex7.dir/1_basic_concept/ex7-指针数组.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ex7.dir/1_basic_concept/ex7-指针数组.c.o   -c "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/1_basic_concept/ex7-指针数组.c"

CMakeFiles/ex7.dir/1_basic_concept/ex7-指针数组.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ex7.dir/1_basic_concept/ex7-指针数组.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/1_basic_concept/ex7-指针数组.c" > CMakeFiles/ex7.dir/1_basic_concept/ex7-指针数组.c.i

CMakeFiles/ex7.dir/1_basic_concept/ex7-指针数组.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ex7.dir/1_basic_concept/ex7-指针数组.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/1_basic_concept/ex7-指针数组.c" -o CMakeFiles/ex7.dir/1_basic_concept/ex7-指针数组.c.s

# Object files for target ex7
ex7_OBJECTS = \
"CMakeFiles/ex7.dir/1_basic_concept/ex7-指针数组.c.o"

# External object files for target ex7
ex7_EXTERNAL_OBJECTS =

ex7: CMakeFiles/ex7.dir/1_basic_concept/ex7-指针数组.c.o
ex7: CMakeFiles/ex7.dir/build.make
ex7: CMakeFiles/ex7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ex7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex7.dir/build: ex7

.PHONY : CMakeFiles/ex7.dir/build

CMakeFiles/ex7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex7.dir/clean

CMakeFiles/ex7.dir/depend:
	cd "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review" "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review" "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/cmake-build-debug" "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/cmake-build-debug" "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/cmake-build-debug/CMakeFiles/ex7.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ex7.dir/depend
