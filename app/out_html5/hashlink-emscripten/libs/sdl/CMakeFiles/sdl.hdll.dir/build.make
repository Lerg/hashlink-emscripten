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
include libs/sdl/CMakeFiles/sdl.hdll.dir/depend.make

# Include the progress variables for this target.
include libs/sdl/CMakeFiles/sdl.hdll.dir/progress.make

# Include the compile flags for this target's objects.
include libs/sdl/CMakeFiles/sdl.hdll.dir/flags.make

libs/sdl/CMakeFiles/sdl.hdll.dir/sdl.c.o: libs/sdl/CMakeFiles/sdl.hdll.dir/flags.make
libs/sdl/CMakeFiles/sdl.hdll.dir/sdl.c.o: libs/sdl/CMakeFiles/sdl.hdll.dir/includes_C.rsp
libs/sdl/CMakeFiles/sdl.hdll.dir/sdl.c.o: libs/sdl/sdl.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lerg/ext/heaps/hashlink-emscripten/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object libs/sdl/CMakeFiles/sdl.hdll.dir/sdl.c.o"
	cd /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl && /Users/lerg/ext/heaps/emsdk/upstream/emscripten/emcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/sdl.hdll.dir/sdl.c.o -c /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl/sdl.c

libs/sdl/CMakeFiles/sdl.hdll.dir/sdl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sdl.hdll.dir/sdl.c.i"
	cd /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl && /Users/lerg/ext/heaps/emsdk/upstream/emscripten/emcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl/sdl.c > CMakeFiles/sdl.hdll.dir/sdl.c.i

libs/sdl/CMakeFiles/sdl.hdll.dir/sdl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sdl.hdll.dir/sdl.c.s"
	cd /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl && /Users/lerg/ext/heaps/emsdk/upstream/emscripten/emcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl/sdl.c -o CMakeFiles/sdl.hdll.dir/sdl.c.s

libs/sdl/CMakeFiles/sdl.hdll.dir/gl.c.o: libs/sdl/CMakeFiles/sdl.hdll.dir/flags.make
libs/sdl/CMakeFiles/sdl.hdll.dir/gl.c.o: libs/sdl/CMakeFiles/sdl.hdll.dir/includes_C.rsp
libs/sdl/CMakeFiles/sdl.hdll.dir/gl.c.o: libs/sdl/gl.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lerg/ext/heaps/hashlink-emscripten/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object libs/sdl/CMakeFiles/sdl.hdll.dir/gl.c.o"
	cd /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl && /Users/lerg/ext/heaps/emsdk/upstream/emscripten/emcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/sdl.hdll.dir/gl.c.o -c /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl/gl.c

libs/sdl/CMakeFiles/sdl.hdll.dir/gl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sdl.hdll.dir/gl.c.i"
	cd /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl && /Users/lerg/ext/heaps/emsdk/upstream/emscripten/emcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl/gl.c > CMakeFiles/sdl.hdll.dir/gl.c.i

libs/sdl/CMakeFiles/sdl.hdll.dir/gl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sdl.hdll.dir/gl.c.s"
	cd /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl && /Users/lerg/ext/heaps/emsdk/upstream/emscripten/emcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl/gl.c -o CMakeFiles/sdl.hdll.dir/gl.c.s

# Object files for target sdl.hdll
sdl_hdll_OBJECTS = \
"CMakeFiles/sdl.hdll.dir/sdl.c.o" \
"CMakeFiles/sdl.hdll.dir/gl.c.o"

# External object files for target sdl.hdll
sdl_hdll_EXTERNAL_OBJECTS =

bin/libsdl_h.a: libs/sdl/CMakeFiles/sdl.hdll.dir/sdl.c.o
bin/libsdl_h.a: libs/sdl/CMakeFiles/sdl.hdll.dir/gl.c.o
bin/libsdl_h.a: libs/sdl/CMakeFiles/sdl.hdll.dir/build.make
bin/libsdl_h.a: libs/sdl/CMakeFiles/sdl.hdll.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lerg/ext/heaps/hashlink-emscripten/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library ../../bin/libsdl_h.a"
	cd /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl && $(CMAKE_COMMAND) -P CMakeFiles/sdl.hdll.dir/cmake_clean_target.cmake
	cd /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sdl.hdll.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/sdl/CMakeFiles/sdl.hdll.dir/build: bin/libsdl_h.a

.PHONY : libs/sdl/CMakeFiles/sdl.hdll.dir/build

libs/sdl/CMakeFiles/sdl.hdll.dir/clean:
	cd /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl && $(CMAKE_COMMAND) -P CMakeFiles/sdl.hdll.dir/cmake_clean.cmake
.PHONY : libs/sdl/CMakeFiles/sdl.hdll.dir/clean

libs/sdl/CMakeFiles/sdl.hdll.dir/depend:
	cd /Users/lerg/ext/heaps/hashlink-emscripten && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lerg/ext/heaps/hashlink-emscripten /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl /Users/lerg/ext/heaps/hashlink-emscripten /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl /Users/lerg/ext/heaps/hashlink-emscripten/libs/sdl/CMakeFiles/sdl.hdll.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libs/sdl/CMakeFiles/sdl.hdll.dir/depend
