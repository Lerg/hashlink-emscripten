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
CMAKE_SOURCE_DIR = /Users/lerg/ext/heaps/emscripten/hashlink-emscripten

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lerg/ext/heaps/emscripten/hashlink-emscripten

# Include any dependencies generated for this target.
include libs/openal/CMakeFiles/openal.hdll.dir/depend.make

# Include the progress variables for this target.
include libs/openal/CMakeFiles/openal.hdll.dir/progress.make

# Include the compile flags for this target's objects.
include libs/openal/CMakeFiles/openal.hdll.dir/flags.make

libs/openal/CMakeFiles/openal.hdll.dir/openal.c.o: libs/openal/CMakeFiles/openal.hdll.dir/flags.make
libs/openal/CMakeFiles/openal.hdll.dir/openal.c.o: libs/openal/CMakeFiles/openal.hdll.dir/includes_C.rsp
libs/openal/CMakeFiles/openal.hdll.dir/openal.c.o: libs/openal/openal.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lerg/ext/heaps/emscripten/hashlink-emscripten/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object libs/openal/CMakeFiles/openal.hdll.dir/openal.c.o"
	cd /Users/lerg/ext/heaps/emscripten/hashlink-emscripten/libs/openal && /Users/lerg/ext/heaps/emsdk/upstream/emscripten/emcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/openal.hdll.dir/openal.c.o -c /Users/lerg/ext/heaps/emscripten/hashlink-emscripten/libs/openal/openal.c

libs/openal/CMakeFiles/openal.hdll.dir/openal.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/openal.hdll.dir/openal.c.i"
	cd /Users/lerg/ext/heaps/emscripten/hashlink-emscripten/libs/openal && /Users/lerg/ext/heaps/emsdk/upstream/emscripten/emcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/lerg/ext/heaps/emscripten/hashlink-emscripten/libs/openal/openal.c > CMakeFiles/openal.hdll.dir/openal.c.i

libs/openal/CMakeFiles/openal.hdll.dir/openal.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/openal.hdll.dir/openal.c.s"
	cd /Users/lerg/ext/heaps/emscripten/hashlink-emscripten/libs/openal && /Users/lerg/ext/heaps/emsdk/upstream/emscripten/emcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/lerg/ext/heaps/emscripten/hashlink-emscripten/libs/openal/openal.c -o CMakeFiles/openal.hdll.dir/openal.c.s

# Object files for target openal.hdll
openal_hdll_OBJECTS = \
"CMakeFiles/openal.hdll.dir/openal.c.o"

# External object files for target openal.hdll
openal_hdll_EXTERNAL_OBJECTS =

bin/libopenal_h.a: libs/openal/CMakeFiles/openal.hdll.dir/openal.c.o
bin/libopenal_h.a: libs/openal/CMakeFiles/openal.hdll.dir/build.make
bin/libopenal_h.a: libs/openal/CMakeFiles/openal.hdll.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lerg/ext/heaps/emscripten/hashlink-emscripten/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library ../../bin/libopenal_h.a"
	cd /Users/lerg/ext/heaps/emscripten/hashlink-emscripten/libs/openal && $(CMAKE_COMMAND) -P CMakeFiles/openal.hdll.dir/cmake_clean_target.cmake
	cd /Users/lerg/ext/heaps/emscripten/hashlink-emscripten/libs/openal && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/openal.hdll.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/openal/CMakeFiles/openal.hdll.dir/build: bin/libopenal_h.a

.PHONY : libs/openal/CMakeFiles/openal.hdll.dir/build

libs/openal/CMakeFiles/openal.hdll.dir/clean:
	cd /Users/lerg/ext/heaps/emscripten/hashlink-emscripten/libs/openal && $(CMAKE_COMMAND) -P CMakeFiles/openal.hdll.dir/cmake_clean.cmake
.PHONY : libs/openal/CMakeFiles/openal.hdll.dir/clean

libs/openal/CMakeFiles/openal.hdll.dir/depend:
	cd /Users/lerg/ext/heaps/emscripten/hashlink-emscripten && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lerg/ext/heaps/emscripten/hashlink-emscripten /Users/lerg/ext/heaps/emscripten/hashlink-emscripten/libs/openal /Users/lerg/ext/heaps/emscripten/hashlink-emscripten /Users/lerg/ext/heaps/emscripten/hashlink-emscripten/libs/openal /Users/lerg/ext/heaps/emscripten/hashlink-emscripten/libs/openal/CMakeFiles/openal.hdll.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libs/openal/CMakeFiles/openal.hdll.dir/depend
