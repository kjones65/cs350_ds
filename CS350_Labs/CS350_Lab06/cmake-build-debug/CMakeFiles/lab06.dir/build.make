# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /opt/clion-2017.2.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2017.2.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab06.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab06.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab06.dir/flags.make

CMakeFiles/lab06.dir/Tree.cpp.o: CMakeFiles/lab06.dir/flags.make
CMakeFiles/lab06.dir/Tree.cpp.o: ../Tree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab06.dir/Tree.cpp.o"
	clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab06.dir/Tree.cpp.o -c /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/Tree.cpp

CMakeFiles/lab06.dir/Tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab06.dir/Tree.cpp.i"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/Tree.cpp > CMakeFiles/lab06.dir/Tree.cpp.i

CMakeFiles/lab06.dir/Tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab06.dir/Tree.cpp.s"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/Tree.cpp -o CMakeFiles/lab06.dir/Tree.cpp.s

CMakeFiles/lab06.dir/Tree.cpp.o.requires:

.PHONY : CMakeFiles/lab06.dir/Tree.cpp.o.requires

CMakeFiles/lab06.dir/Tree.cpp.o.provides: CMakeFiles/lab06.dir/Tree.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab06.dir/build.make CMakeFiles/lab06.dir/Tree.cpp.o.provides.build
.PHONY : CMakeFiles/lab06.dir/Tree.cpp.o.provides

CMakeFiles/lab06.dir/Tree.cpp.o.provides.build: CMakeFiles/lab06.dir/Tree.cpp.o


CMakeFiles/lab06.dir/PrettyPrinter.cpp.o: CMakeFiles/lab06.dir/flags.make
CMakeFiles/lab06.dir/PrettyPrinter.cpp.o: ../PrettyPrinter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab06.dir/PrettyPrinter.cpp.o"
	clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab06.dir/PrettyPrinter.cpp.o -c /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/PrettyPrinter.cpp

CMakeFiles/lab06.dir/PrettyPrinter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab06.dir/PrettyPrinter.cpp.i"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/PrettyPrinter.cpp > CMakeFiles/lab06.dir/PrettyPrinter.cpp.i

CMakeFiles/lab06.dir/PrettyPrinter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab06.dir/PrettyPrinter.cpp.s"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/PrettyPrinter.cpp -o CMakeFiles/lab06.dir/PrettyPrinter.cpp.s

CMakeFiles/lab06.dir/PrettyPrinter.cpp.o.requires:

.PHONY : CMakeFiles/lab06.dir/PrettyPrinter.cpp.o.requires

CMakeFiles/lab06.dir/PrettyPrinter.cpp.o.provides: CMakeFiles/lab06.dir/PrettyPrinter.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab06.dir/build.make CMakeFiles/lab06.dir/PrettyPrinter.cpp.o.provides.build
.PHONY : CMakeFiles/lab06.dir/PrettyPrinter.cpp.o.provides

CMakeFiles/lab06.dir/PrettyPrinter.cpp.o.provides.build: CMakeFiles/lab06.dir/PrettyPrinter.cpp.o


CMakeFiles/lab06.dir/main.cpp.o: CMakeFiles/lab06.dir/flags.make
CMakeFiles/lab06.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab06.dir/main.cpp.o"
	clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab06.dir/main.cpp.o -c /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/main.cpp

CMakeFiles/lab06.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab06.dir/main.cpp.i"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/main.cpp > CMakeFiles/lab06.dir/main.cpp.i

CMakeFiles/lab06.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab06.dir/main.cpp.s"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/main.cpp -o CMakeFiles/lab06.dir/main.cpp.s

CMakeFiles/lab06.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/lab06.dir/main.cpp.o.requires

CMakeFiles/lab06.dir/main.cpp.o.provides: CMakeFiles/lab06.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab06.dir/build.make CMakeFiles/lab06.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/lab06.dir/main.cpp.o.provides

CMakeFiles/lab06.dir/main.cpp.o.provides.build: CMakeFiles/lab06.dir/main.cpp.o


# Object files for target lab06
lab06_OBJECTS = \
"CMakeFiles/lab06.dir/Tree.cpp.o" \
"CMakeFiles/lab06.dir/PrettyPrinter.cpp.o" \
"CMakeFiles/lab06.dir/main.cpp.o"

# External object files for target lab06
lab06_EXTERNAL_OBJECTS =

../lab06: CMakeFiles/lab06.dir/Tree.cpp.o
../lab06: CMakeFiles/lab06.dir/PrettyPrinter.cpp.o
../lab06: CMakeFiles/lab06.dir/main.cpp.o
../lab06: CMakeFiles/lab06.dir/build.make
../lab06: CMakeFiles/lab06.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../lab06"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab06.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab06.dir/build: ../lab06

.PHONY : CMakeFiles/lab06.dir/build

CMakeFiles/lab06.dir/requires: CMakeFiles/lab06.dir/Tree.cpp.o.requires
CMakeFiles/lab06.dir/requires: CMakeFiles/lab06.dir/PrettyPrinter.cpp.o.requires
CMakeFiles/lab06.dir/requires: CMakeFiles/lab06.dir/main.cpp.o.requires

.PHONY : CMakeFiles/lab06.dir/requires

CMakeFiles/lab06.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab06.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab06.dir/clean

CMakeFiles/lab06.dir/depend:
	cd /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06 /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06 /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/cmake-build-debug /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/cmake-build-debug /home/kjones/Desktop/cs350_ds/CS350_Labs/CS350_Lab06/cmake-build-debug/CMakeFiles/lab06.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab06.dir/depend

