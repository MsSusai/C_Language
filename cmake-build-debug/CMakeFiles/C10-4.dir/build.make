# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\clion\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\clion\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Code\C_Language_Practice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Code\C_Language_Practice\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/C10-4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C10-4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C10-4.dir/flags.make

CMakeFiles/C10-4.dir/C10-4.c.obj: CMakeFiles/C10-4.dir/flags.make
CMakeFiles/C10-4.dir/C10-4.c.obj: ../C10-4.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\C_Language_Practice\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/C10-4.dir/C10-4.c.obj"
	E:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\C10-4.dir\C10-4.c.obj   -c E:\Code\C_Language_Practice\C10-4.c

CMakeFiles/C10-4.dir/C10-4.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/C10-4.dir/C10-4.c.i"
	E:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Code\C_Language_Practice\C10-4.c > CMakeFiles\C10-4.dir\C10-4.c.i

CMakeFiles/C10-4.dir/C10-4.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/C10-4.dir/C10-4.c.s"
	E:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Code\C_Language_Practice\C10-4.c -o CMakeFiles\C10-4.dir\C10-4.c.s

# Object files for target C10-4
C10__4_OBJECTS = \
"CMakeFiles/C10-4.dir/C10-4.c.obj"

# External object files for target C10-4
C10__4_EXTERNAL_OBJECTS =

C10-4.exe: CMakeFiles/C10-4.dir/C10-4.c.obj
C10-4.exe: CMakeFiles/C10-4.dir/build.make
C10-4.exe: CMakeFiles/C10-4.dir/linklibs.rsp
C10-4.exe: CMakeFiles/C10-4.dir/objects1.rsp
C10-4.exe: CMakeFiles/C10-4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Code\C_Language_Practice\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable C10-4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\C10-4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C10-4.dir/build: C10-4.exe

.PHONY : CMakeFiles/C10-4.dir/build

CMakeFiles/C10-4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\C10-4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/C10-4.dir/clean

CMakeFiles/C10-4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Code\C_Language_Practice E:\Code\C_Language_Practice E:\Code\C_Language_Practice\cmake-build-debug E:\Code\C_Language_Practice\cmake-build-debug E:\Code\C_Language_Practice\cmake-build-debug\CMakeFiles\C10-4.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/C10-4.dir/depend

