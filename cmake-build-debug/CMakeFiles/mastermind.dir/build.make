# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nadia/Projects/mastermind

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nadia/Projects/mastermind/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mastermind.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mastermind.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mastermind.dir/flags.make

CMakeFiles/mastermind.dir/source/library.cpp.o: CMakeFiles/mastermind.dir/flags.make
CMakeFiles/mastermind.dir/source/library.cpp.o: ../source/library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nadia/Projects/mastermind/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mastermind.dir/source/library.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mastermind.dir/source/library.cpp.o -c /Users/nadia/Projects/mastermind/source/library.cpp

CMakeFiles/mastermind.dir/source/library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mastermind.dir/source/library.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nadia/Projects/mastermind/source/library.cpp > CMakeFiles/mastermind.dir/source/library.cpp.i

CMakeFiles/mastermind.dir/source/library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mastermind.dir/source/library.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nadia/Projects/mastermind/source/library.cpp -o CMakeFiles/mastermind.dir/source/library.cpp.s

CMakeFiles/mastermind.dir/source/library.cpp.o.requires:

.PHONY : CMakeFiles/mastermind.dir/source/library.cpp.o.requires

CMakeFiles/mastermind.dir/source/library.cpp.o.provides: CMakeFiles/mastermind.dir/source/library.cpp.o.requires
	$(MAKE) -f CMakeFiles/mastermind.dir/build.make CMakeFiles/mastermind.dir/source/library.cpp.o.provides.build
.PHONY : CMakeFiles/mastermind.dir/source/library.cpp.o.provides

CMakeFiles/mastermind.dir/source/library.cpp.o.provides.build: CMakeFiles/mastermind.dir/source/library.cpp.o


# Object files for target mastermind
mastermind_OBJECTS = \
"CMakeFiles/mastermind.dir/source/library.cpp.o"

# External object files for target mastermind
mastermind_EXTERNAL_OBJECTS =

libmastermind.a: CMakeFiles/mastermind.dir/source/library.cpp.o
libmastermind.a: CMakeFiles/mastermind.dir/build.make
libmastermind.a: CMakeFiles/mastermind.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nadia/Projects/mastermind/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmastermind.a"
	$(CMAKE_COMMAND) -P CMakeFiles/mastermind.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mastermind.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mastermind.dir/build: libmastermind.a

.PHONY : CMakeFiles/mastermind.dir/build

CMakeFiles/mastermind.dir/requires: CMakeFiles/mastermind.dir/source/library.cpp.o.requires

.PHONY : CMakeFiles/mastermind.dir/requires

CMakeFiles/mastermind.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mastermind.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mastermind.dir/clean

CMakeFiles/mastermind.dir/depend:
	cd /Users/nadia/Projects/mastermind/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nadia/Projects/mastermind /Users/nadia/Projects/mastermind /Users/nadia/Projects/mastermind/cmake-build-debug /Users/nadia/Projects/mastermind/cmake-build-debug /Users/nadia/Projects/mastermind/cmake-build-debug/CMakeFiles/mastermind.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mastermind.dir/depend
