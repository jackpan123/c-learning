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
CMAKE_SOURCE_DIR = /Users/jackpan/JackPanDocuments/jack-project/c-learning

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jackpan/JackPanDocuments/jack-project/c-learning/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c_learning.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c_learning.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c_learning.dir/flags.make

CMakeFiles/c_learning.dir/chapter-three/exercise_3_6.c.o: CMakeFiles/c_learning.dir/flags.make
CMakeFiles/c_learning.dir/chapter-three/exercise_3_6.c.o: ../chapter-three/exercise_3_6.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jackpan/JackPanDocuments/jack-project/c-learning/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c_learning.dir/chapter-three/exercise_3_6.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c_learning.dir/chapter-three/exercise_3_6.c.o   -c /Users/jackpan/JackPanDocuments/jack-project/c-learning/chapter-three/exercise_3_6.c

CMakeFiles/c_learning.dir/chapter-three/exercise_3_6.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c_learning.dir/chapter-three/exercise_3_6.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/jackpan/JackPanDocuments/jack-project/c-learning/chapter-three/exercise_3_6.c > CMakeFiles/c_learning.dir/chapter-three/exercise_3_6.c.i

CMakeFiles/c_learning.dir/chapter-three/exercise_3_6.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c_learning.dir/chapter-three/exercise_3_6.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/jackpan/JackPanDocuments/jack-project/c-learning/chapter-three/exercise_3_6.c -o CMakeFiles/c_learning.dir/chapter-three/exercise_3_6.c.s

# Object files for target c_learning
c_learning_OBJECTS = \
"CMakeFiles/c_learning.dir/chapter-three/exercise_3_6.c.o"

# External object files for target c_learning
c_learning_EXTERNAL_OBJECTS =

c_learning: CMakeFiles/c_learning.dir/chapter-three/exercise_3_6.c.o
c_learning: CMakeFiles/c_learning.dir/build.make
c_learning: CMakeFiles/c_learning.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jackpan/JackPanDocuments/jack-project/c-learning/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable c_learning"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c_learning.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c_learning.dir/build: c_learning

.PHONY : CMakeFiles/c_learning.dir/build

CMakeFiles/c_learning.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/c_learning.dir/cmake_clean.cmake
.PHONY : CMakeFiles/c_learning.dir/clean

CMakeFiles/c_learning.dir/depend:
	cd /Users/jackpan/JackPanDocuments/jack-project/c-learning/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jackpan/JackPanDocuments/jack-project/c-learning /Users/jackpan/JackPanDocuments/jack-project/c-learning /Users/jackpan/JackPanDocuments/jack-project/c-learning/cmake-build-debug /Users/jackpan/JackPanDocuments/jack-project/c-learning/cmake-build-debug /Users/jackpan/JackPanDocuments/jack-project/c-learning/cmake-build-debug/CMakeFiles/c_learning.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c_learning.dir/depend

