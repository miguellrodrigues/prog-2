# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/cmake/769/bin/cmake

# The command to remove a file.
RM = /snap/cmake/769/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/miguel/projects/dev/prog-2/lab/exerc1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/miguel/projects/dev/prog-2/lab/exerc1/build

# Include any dependencies generated for this target.
include CMakeFiles/exerc1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exerc1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exerc1.dir/flags.make

CMakeFiles/exerc1.dir/main.cpp.o: CMakeFiles/exerc1.dir/flags.make
CMakeFiles/exerc1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miguel/projects/dev/prog-2/lab/exerc1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exerc1.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exerc1.dir/main.cpp.o -c /home/miguel/projects/dev/prog-2/lab/exerc1/main.cpp

CMakeFiles/exerc1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exerc1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/miguel/projects/dev/prog-2/lab/exerc1/main.cpp > CMakeFiles/exerc1.dir/main.cpp.i

CMakeFiles/exerc1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exerc1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/miguel/projects/dev/prog-2/lab/exerc1/main.cpp -o CMakeFiles/exerc1.dir/main.cpp.s

# Object files for target exerc1
exerc1_OBJECTS = \
"CMakeFiles/exerc1.dir/main.cpp.o"

# External object files for target exerc1
exerc1_EXTERNAL_OBJECTS =

exerc1: CMakeFiles/exerc1.dir/main.cpp.o
exerc1: CMakeFiles/exerc1.dir/build.make
exerc1: CMakeFiles/exerc1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/miguel/projects/dev/prog-2/lab/exerc1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable exerc1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exerc1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exerc1.dir/build: exerc1

.PHONY : CMakeFiles/exerc1.dir/build

CMakeFiles/exerc1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exerc1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exerc1.dir/clean

CMakeFiles/exerc1.dir/depend:
	cd /home/miguel/projects/dev/prog-2/lab/exerc1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/miguel/projects/dev/prog-2/lab/exerc1 /home/miguel/projects/dev/prog-2/lab/exerc1 /home/miguel/projects/dev/prog-2/lab/exerc1/build /home/miguel/projects/dev/prog-2/lab/exerc1/build /home/miguel/projects/dev/prog-2/lab/exerc1/build/CMakeFiles/exerc1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exerc1.dir/depend
