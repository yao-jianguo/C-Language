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
include CMakeFiles/ex8.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex8.dir/flags.make

CMakeFiles/ex8.dir/1_basic_concept/ex8-指向指针的指针.c.o: CMakeFiles/ex8.dir/flags.make
CMakeFiles/ex8.dir/1_basic_concept/ex8-指向指针的指针.c.o: ../1_basic_concept/ex8-指向指针的指针.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ex8.dir/1_basic_concept/ex8-指向指针的指针.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ex8.dir/1_basic_concept/ex8-指向指针的指针.c.o   -c "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/1_basic_concept/ex8-指向指针的指针.c"

CMakeFiles/ex8.dir/1_basic_concept/ex8-指向指针的指针.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ex8.dir/1_basic_concept/ex8-指向指针的指针.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/1_basic_concept/ex8-指向指针的指针.c" > CMakeFiles/ex8.dir/1_basic_concept/ex8-指向指针的指针.c.i

CMakeFiles/ex8.dir/1_basic_concept/ex8-指向指针的指针.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ex8.dir/1_basic_concept/ex8-指向指针的指针.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/1_basic_concept/ex8-指向指针的指针.c" -o CMakeFiles/ex8.dir/1_basic_concept/ex8-指向指针的指针.c.s

# Object files for target ex8
ex8_OBJECTS = \
"CMakeFiles/ex8.dir/1_basic_concept/ex8-指向指针的指针.c.o"

# External object files for target ex8
ex8_EXTERNAL_OBJECTS =

ex8: CMakeFiles/ex8.dir/1_basic_concept/ex8-指向指针的指针.c.o
ex8: CMakeFiles/ex8.dir/build.make
ex8: CMakeFiles/ex8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ex8"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex8.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex8.dir/build: ex8

.PHONY : CMakeFiles/ex8.dir/build

CMakeFiles/ex8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex8.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex8.dir/clean

CMakeFiles/ex8.dir/depend:
	cd "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review" "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review" "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/cmake-build-debug" "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/cmake-build-debug" "/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/C-review/cmake-build-debug/CMakeFiles/ex8.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ex8.dir/depend
