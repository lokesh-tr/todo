# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\---Projects---\TODO App - C++\todo"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\---Projects---\TODO App - C++\todo\build"

# Include any dependencies generated for this target.
include apps/CMakeFiles/todo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include apps/CMakeFiles/todo.dir/compiler_depend.make

# Include the progress variables for this target.
include apps/CMakeFiles/todo.dir/progress.make

# Include the compile flags for this target's objects.
include apps/CMakeFiles/todo.dir/flags.make

apps/CMakeFiles/todo.dir/main.cpp.obj: apps/CMakeFiles/todo.dir/flags.make
apps/CMakeFiles/todo.dir/main.cpp.obj: apps/CMakeFiles/todo.dir/includes_CXX.rsp
apps/CMakeFiles/todo.dir/main.cpp.obj: E:/---Projects---/TODO\ App\ -\ C++/todo/apps/main.cpp
apps/CMakeFiles/todo.dir/main.cpp.obj: apps/CMakeFiles/todo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="E:\---Projects---\TODO App - C++\todo\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object apps/CMakeFiles/todo.dir/main.cpp.obj"
	cd /d "E:\---Projects---\TODO App - C++\todo\build\apps" && C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT apps/CMakeFiles/todo.dir/main.cpp.obj -MF CMakeFiles\todo.dir\main.cpp.obj.d -o CMakeFiles\todo.dir\main.cpp.obj -c "E:\---Projects---\TODO App - C++\todo\apps\main.cpp"

apps/CMakeFiles/todo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/todo.dir/main.cpp.i"
	cd /d "E:\---Projects---\TODO App - C++\todo\build\apps" && C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\---Projects---\TODO App - C++\todo\apps\main.cpp" > CMakeFiles\todo.dir\main.cpp.i

apps/CMakeFiles/todo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/todo.dir/main.cpp.s"
	cd /d "E:\---Projects---\TODO App - C++\todo\build\apps" && C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\---Projects---\TODO App - C++\todo\apps\main.cpp" -o CMakeFiles\todo.dir\main.cpp.s

# Object files for target todo
todo_OBJECTS = \
"CMakeFiles/todo.dir/main.cpp.obj"

# External object files for target todo
todo_EXTERNAL_OBJECTS =

apps/todo.exe: apps/CMakeFiles/todo.dir/main.cpp.obj
apps/todo.exe: apps/CMakeFiles/todo.dir/build.make
apps/todo.exe: src/libtodo_lib.a
apps/todo.exe: apps/CMakeFiles/todo.dir/linkLibs.rsp
apps/todo.exe: apps/CMakeFiles/todo.dir/objects1.rsp
apps/todo.exe: apps/CMakeFiles/todo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="E:\---Projects---\TODO App - C++\todo\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable todo.exe"
	cd /d "E:\---Projects---\TODO App - C++\todo\build\apps" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\todo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
apps/CMakeFiles/todo.dir/build: apps/todo.exe
.PHONY : apps/CMakeFiles/todo.dir/build

apps/CMakeFiles/todo.dir/clean:
	cd /d "E:\---Projects---\TODO App - C++\todo\build\apps" && $(CMAKE_COMMAND) -P CMakeFiles\todo.dir\cmake_clean.cmake
.PHONY : apps/CMakeFiles/todo.dir/clean

apps/CMakeFiles/todo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\---Projects---\TODO App - C++\todo" "E:\---Projects---\TODO App - C++\todo\apps" "E:\---Projects---\TODO App - C++\todo\build" "E:\---Projects---\TODO App - C++\todo\build\apps" "E:\---Projects---\TODO App - C++\todo\build\apps\CMakeFiles\todo.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : apps/CMakeFiles/todo.dir/depend

