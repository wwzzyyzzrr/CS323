# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/metaron/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/192.6603.37/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/metaron/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/192.6603.37/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/metaron/文档/Study/CS323/CS323/project2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/metaron/文档/Study/CS323/CS323/project2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/project2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/project2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project2.dir/flags.make

CMakeFiles/project2.dir/pro_2.tab.c.o: CMakeFiles/project2.dir/flags.make
CMakeFiles/project2.dir/pro_2.tab.c.o: ../pro_2.tab.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/metaron/文档/Study/CS323/CS323/project2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project2.dir/pro_2.tab.c.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project2.dir/pro_2.tab.c.o -c /home/metaron/文档/Study/CS323/CS323/project2/pro_2.tab.c

CMakeFiles/project2.dir/pro_2.tab.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2.dir/pro_2.tab.c.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/metaron/文档/Study/CS323/CS323/project2/pro_2.tab.c > CMakeFiles/project2.dir/pro_2.tab.c.i

CMakeFiles/project2.dir/pro_2.tab.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2.dir/pro_2.tab.c.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/metaron/文档/Study/CS323/CS323/project2/pro_2.tab.c -o CMakeFiles/project2.dir/pro_2.tab.c.s

# Object files for target project2
project2_OBJECTS = \
"CMakeFiles/project2.dir/pro_2.tab.c.o"

# External object files for target project2
project2_EXTERNAL_OBJECTS =

project2: CMakeFiles/project2.dir/pro_2.tab.c.o
project2: CMakeFiles/project2.dir/build.make
project2: CMakeFiles/project2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/metaron/文档/Study/CS323/CS323/project2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable project2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project2.dir/build: project2

.PHONY : CMakeFiles/project2.dir/build

CMakeFiles/project2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project2.dir/clean

CMakeFiles/project2.dir/depend:
	cd /home/metaron/文档/Study/CS323/CS323/project2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/metaron/文档/Study/CS323/CS323/project2 /home/metaron/文档/Study/CS323/CS323/project2 /home/metaron/文档/Study/CS323/CS323/project2/cmake-build-debug /home/metaron/文档/Study/CS323/CS323/project2/cmake-build-debug /home/metaron/文档/Study/CS323/CS323/project2/cmake-build-debug/CMakeFiles/project2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project2.dir/depend

