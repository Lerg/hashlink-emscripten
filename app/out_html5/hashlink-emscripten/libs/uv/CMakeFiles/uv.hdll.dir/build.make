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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.19.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.19.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lerg/ext/heaps/hashlink-emscripten

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lerg/ext/heaps/hashlink-emscripten

# Include any dependencies generated for this target.
include libs/uv/CMakeFiles/uv.hdll.dir/depend.make

# Include the progress variables for this target.
include libs/uv/CMakeFiles/uv.hdll.dir/progress.make

# Include the compile flags for this target's objects.
include libs/uv/CMakeFiles/uv.hdll.dir/flags.make

libs/uv/CMakeFiles/uv.hdll.dir/uv.c.o: libs/uv/CMakeFiles/uv.hdll.dir/flags.make
libs/uv/CMakeFiles/uv.hdll.dir/uv.c.o: libs/uv/CMakeFiles/uv.hdll.dir/includes_C.rsp
libs/uv/CMakeFiles/uv.hdll.dir/uv.c.o: libs/uv/uv.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lerg/ext/heaps/hashlink-emscripten/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object libs/uv/CMakeFiles/uv.hdll.dir/uv.c.o"
	cd /Users/lerg/ext/heaps/hashlink-emscripten/libs/uv && /Users/lerg/ext/heaps/emsdk/upstream/emscripten/emcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/uv.hdll.dir/uv.c.o -c /Users/lerg/ext/heaps/hashlink-emscripten/libs/uv/uv.c

libs/uv/CMakeFiles/uv.hdll.dir/uv.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uv.hdll.dir/uv.c.i"
	cd /Users/lerg/ext/heaps/hashlink-emscripten/libs/uv && /Users/lerg/ext/heaps/emsdk/upstream/emscripten/emcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/lerg/ext/heaps/hashlink-emscripten/libs/uv/uv.c > CMakeFiles/uv.hdll.dir/uv.c.i

libs/uv/CMakeFiles/uv.hdll.dir/uv.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uv.hdll.dir/uv.c.s"
	cd /Users/lerg/ext/heaps/hashlink-emscripten/libs/uv && /Users/lerg/ext/heaps/emsdk/upstream/emscripten/emcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/lerg/ext/heaps/hashlink-emscripten/libs/uv/uv.c -o CMakeFiles/uv.hdll.dir/uv.c.s

# Object files for target uv.hdll
uv_hdll_OBJECTS = \
"CMakeFiles/uv.hdll.dir/uv.c.o"

# External object files for target uv.hdll
uv_hdll_EXTERNAL_OBJECTS =

bin/uv.hdll: libs/uv/CMakeFiles/uv.hdll.dir/uv.c.o
bin/uv.hdll: libs/uv/CMakeFiles/uv.hdll.dir/build.make
bin/uv.hdll: libs/uv/CMakeFiles/uv.hdll.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lerg/ext/heaps/hashlink-emscripten/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library ../../bin/uv.hdll"
	cd /Users/lerg/ext/heaps/hashlink-emscripten/libs/uv && $(CMAKE_COMMAND) -P CMakeFiles/uv.hdll.dir/cmake_clean_target.cmake
	cd /Users/lerg/ext/heaps/hashlink-emscripten/libs/uv && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/uv.hdll.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/uv/CMakeFiles/uv.hdll.dir/build: bin/uv.hdll

.PHONY : libs/uv/CMakeFiles/uv.hdll.dir/build

libs/uv/CMakeFiles/uv.hdll.dir/clean:
	cd /Users/lerg/ext/heaps/hashlink-emscripten/libs/uv && $(CMAKE_COMMAND) -P CMakeFiles/uv.hdll.dir/cmake_clean.cmake
.PHONY : libs/uv/CMakeFiles/uv.hdll.dir/clean

libs/uv/CMakeFiles/uv.hdll.dir/depend:
	cd /Users/lerg/ext/heaps/hashlink-emscripten && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lerg/ext/heaps/hashlink-emscripten /Users/lerg/ext/heaps/hashlink-emscripten/libs/uv /Users/lerg/ext/heaps/hashlink-emscripten /Users/lerg/ext/heaps/hashlink-emscripten/libs/uv /Users/lerg/ext/heaps/hashlink-emscripten/libs/uv/CMakeFiles/uv.hdll.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libs/uv/CMakeFiles/uv.hdll.dir/depend
