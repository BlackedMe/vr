# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/black/Documents/Projects/vr

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/black/Documents/Projects/vr/build

# Include any dependencies generated for this target.
include deps/glad/CMakeFiles/glad.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include deps/glad/CMakeFiles/glad.dir/compiler_depend.make

# Include the progress variables for this target.
include deps/glad/CMakeFiles/glad.dir/progress.make

# Include the compile flags for this target's objects.
include deps/glad/CMakeFiles/glad.dir/flags.make

deps/glad/CMakeFiles/glad.dir/codegen:
.PHONY : deps/glad/CMakeFiles/glad.dir/codegen

deps/glad/CMakeFiles/glad.dir/src/glad.c.o: deps/glad/CMakeFiles/glad.dir/flags.make
deps/glad/CMakeFiles/glad.dir/src/glad.c.o: /home/black/Documents/Projects/vr/deps/glad/src/glad.c
deps/glad/CMakeFiles/glad.dir/src/glad.c.o: deps/glad/CMakeFiles/glad.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/black/Documents/Projects/vr/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object deps/glad/CMakeFiles/glad.dir/src/glad.c.o"
	cd /home/black/Documents/Projects/vr/build/deps/glad && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT deps/glad/CMakeFiles/glad.dir/src/glad.c.o -MF CMakeFiles/glad.dir/src/glad.c.o.d -o CMakeFiles/glad.dir/src/glad.c.o -c /home/black/Documents/Projects/vr/deps/glad/src/glad.c

deps/glad/CMakeFiles/glad.dir/src/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/glad.dir/src/glad.c.i"
	cd /home/black/Documents/Projects/vr/build/deps/glad && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/black/Documents/Projects/vr/deps/glad/src/glad.c > CMakeFiles/glad.dir/src/glad.c.i

deps/glad/CMakeFiles/glad.dir/src/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/glad.dir/src/glad.c.s"
	cd /home/black/Documents/Projects/vr/build/deps/glad && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/black/Documents/Projects/vr/deps/glad/src/glad.c -o CMakeFiles/glad.dir/src/glad.c.s

# Object files for target glad
glad_OBJECTS = \
"CMakeFiles/glad.dir/src/glad.c.o"

# External object files for target glad
glad_EXTERNAL_OBJECTS =

deps/glad/libglad.so: deps/glad/CMakeFiles/glad.dir/src/glad.c.o
deps/glad/libglad.so: deps/glad/CMakeFiles/glad.dir/build.make
deps/glad/libglad.so: deps/glad/CMakeFiles/glad.dir/compiler_depend.ts
deps/glad/libglad.so: deps/glad/CMakeFiles/glad.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/black/Documents/Projects/vr/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library libglad.so"
	cd /home/black/Documents/Projects/vr/build/deps/glad && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/glad.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
deps/glad/CMakeFiles/glad.dir/build: deps/glad/libglad.so
.PHONY : deps/glad/CMakeFiles/glad.dir/build

deps/glad/CMakeFiles/glad.dir/clean:
	cd /home/black/Documents/Projects/vr/build/deps/glad && $(CMAKE_COMMAND) -P CMakeFiles/glad.dir/cmake_clean.cmake
.PHONY : deps/glad/CMakeFiles/glad.dir/clean

deps/glad/CMakeFiles/glad.dir/depend:
	cd /home/black/Documents/Projects/vr/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/black/Documents/Projects/vr /home/black/Documents/Projects/vr/deps/glad /home/black/Documents/Projects/vr/build /home/black/Documents/Projects/vr/build/deps/glad /home/black/Documents/Projects/vr/build/deps/glad/CMakeFiles/glad.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : deps/glad/CMakeFiles/glad.dir/depend

