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
CMAKE_SOURCE_DIR = /home/kjones/Desktop/cs350_ds/CS350_assignments/BST

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kjones/Desktop/cs350_ds/CS350_assignments/BST/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BST.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BST.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BST.dir/flags.make

CMakeFiles/BST.dir/BST.cpp.o: CMakeFiles/BST.dir/flags.make
CMakeFiles/BST.dir/BST.cpp.o: ../BST.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kjones/Desktop/cs350_ds/CS350_assignments/BST/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BST.dir/BST.cpp.o"
	clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BST.dir/BST.cpp.o -c /home/kjones/Desktop/cs350_ds/CS350_assignments/BST/BST.cpp

CMakeFiles/BST.dir/BST.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BST.dir/BST.cpp.i"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kjones/Desktop/cs350_ds/CS350_assignments/BST/BST.cpp > CMakeFiles/BST.dir/BST.cpp.i

CMakeFiles/BST.dir/BST.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BST.dir/BST.cpp.s"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kjones/Desktop/cs350_ds/CS350_assignments/BST/BST.cpp -o CMakeFiles/BST.dir/BST.cpp.s

CMakeFiles/BST.dir/BST.cpp.o.requires:

.PHONY : CMakeFiles/BST.dir/BST.cpp.o.requires

CMakeFiles/BST.dir/BST.cpp.o.provides: CMakeFiles/BST.dir/BST.cpp.o.requires
	$(MAKE) -f CMakeFiles/BST.dir/build.make CMakeFiles/BST.dir/BST.cpp.o.provides.build
.PHONY : CMakeFiles/BST.dir/BST.cpp.o.provides

CMakeFiles/BST.dir/BST.cpp.o.provides.build: CMakeFiles/BST.dir/BST.cpp.o


CMakeFiles/BST.dir/PrettyPrinter.cpp.o: CMakeFiles/BST.dir/flags.make
CMakeFiles/BST.dir/PrettyPrinter.cpp.o: ../PrettyPrinter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kjones/Desktop/cs350_ds/CS350_assignments/BST/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BST.dir/PrettyPrinter.cpp.o"
	clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BST.dir/PrettyPrinter.cpp.o -c /home/kjones/Desktop/cs350_ds/CS350_assignments/BST/PrettyPrinter.cpp

CMakeFiles/BST.dir/PrettyPrinter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BST.dir/PrettyPrinter.cpp.i"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kjones/Desktop/cs350_ds/CS350_assignments/BST/PrettyPrinter.cpp > CMakeFiles/BST.dir/PrettyPrinter.cpp.i

CMakeFiles/BST.dir/PrettyPrinter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BST.dir/PrettyPrinter.cpp.s"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kjones/Desktop/cs350_ds/CS350_assignments/BST/PrettyPrinter.cpp -o CMakeFiles/BST.dir/PrettyPrinter.cpp.s

CMakeFiles/BST.dir/PrettyPrinter.cpp.o.requires:

.PHONY : CMakeFiles/BST.dir/PrettyPrinter.cpp.o.requires

CMakeFiles/BST.dir/PrettyPrinter.cpp.o.provides: CMakeFiles/BST.dir/PrettyPrinter.cpp.o.requires
	$(MAKE) -f CMakeFiles/BST.dir/build.make CMakeFiles/BST.dir/PrettyPrinter.cpp.o.provides.build
.PHONY : CMakeFiles/BST.dir/PrettyPrinter.cpp.o.provides

CMakeFiles/BST.dir/PrettyPrinter.cpp.o.provides.build: CMakeFiles/BST.dir/PrettyPrinter.cpp.o


CMakeFiles/BST.dir/tests.cpp.o: CMakeFiles/BST.dir/flags.make
CMakeFiles/BST.dir/tests.cpp.o: ../tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kjones/Desktop/cs350_ds/CS350_assignments/BST/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/BST.dir/tests.cpp.o"
	clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BST.dir/tests.cpp.o -c /home/kjones/Desktop/cs350_ds/CS350_assignments/BST/tests.cpp

CMakeFiles/BST.dir/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BST.dir/tests.cpp.i"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kjones/Desktop/cs350_ds/CS350_assignments/BST/tests.cpp > CMakeFiles/BST.dir/tests.cpp.i

CMakeFiles/BST.dir/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BST.dir/tests.cpp.s"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kjones/Desktop/cs350_ds/CS350_assignments/BST/tests.cpp -o CMakeFiles/BST.dir/tests.cpp.s

CMakeFiles/BST.dir/tests.cpp.o.requires:

.PHONY : CMakeFiles/BST.dir/tests.cpp.o.requires

CMakeFiles/BST.dir/tests.cpp.o.provides: CMakeFiles/BST.dir/tests.cpp.o.requires
	$(MAKE) -f CMakeFiles/BST.dir/build.make CMakeFiles/BST.dir/tests.cpp.o.provides.build
.PHONY : CMakeFiles/BST.dir/tests.cpp.o.provides

CMakeFiles/BST.dir/tests.cpp.o.provides.build: CMakeFiles/BST.dir/tests.cpp.o


# Object files for target BST
BST_OBJECTS = \
"CMakeFiles/BST.dir/BST.cpp.o" \
"CMakeFiles/BST.dir/PrettyPrinter.cpp.o" \
"CMakeFiles/BST.dir/tests.cpp.o"

# External object files for target BST
BST_EXTERNAL_OBJECTS =

../BST: CMakeFiles/BST.dir/BST.cpp.o
../BST: CMakeFiles/BST.dir/PrettyPrinter.cpp.o
../BST: CMakeFiles/BST.dir/tests.cpp.o
../BST: CMakeFiles/BST.dir/build.make
../BST: ../libBST_Linux.a
../BST: CMakeFiles/BST.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kjones/Desktop/cs350_ds/CS350_assignments/BST/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../BST"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BST.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BST.dir/build: ../BST

.PHONY : CMakeFiles/BST.dir/build

CMakeFiles/BST.dir/requires: CMakeFiles/BST.dir/BST.cpp.o.requires
CMakeFiles/BST.dir/requires: CMakeFiles/BST.dir/PrettyPrinter.cpp.o.requires
CMakeFiles/BST.dir/requires: CMakeFiles/BST.dir/tests.cpp.o.requires

.PHONY : CMakeFiles/BST.dir/requires

CMakeFiles/BST.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BST.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BST.dir/clean

CMakeFiles/BST.dir/depend:
	cd /home/kjones/Desktop/cs350_ds/CS350_assignments/BST/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kjones/Desktop/cs350_ds/CS350_assignments/BST /home/kjones/Desktop/cs350_ds/CS350_assignments/BST /home/kjones/Desktop/cs350_ds/CS350_assignments/BST/cmake-build-debug /home/kjones/Desktop/cs350_ds/CS350_assignments/BST/cmake-build-debug /home/kjones/Desktop/cs350_ds/CS350_assignments/BST/cmake-build-debug/CMakeFiles/BST.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BST.dir/depend

