# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = D:\Jetbrains\apps\CLion\ch-0\223.8617.54\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = D:\Jetbrains\apps\CLion\ch-0\223.8617.54\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Code\StudentCourses\Courses

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Code\StudentCourses\Courses\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Courses.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Courses.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Courses.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Courses.dir/flags.make

CMakeFiles/Courses.dir/src/main.cpp.obj: CMakeFiles/Courses.dir/flags.make
CMakeFiles/Courses.dir/src/main.cpp.obj: E:/Code/StudentCourses/Courses/src/main.cpp
CMakeFiles/Courses.dir/src/main.cpp.obj: CMakeFiles/Courses.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\StudentCourses\Courses\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Courses.dir/src/main.cpp.obj"
	D:\Jetbrains\apps\CLion\ch-0\223.8617.54\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Courses.dir/src/main.cpp.obj -MF CMakeFiles\Courses.dir\src\main.cpp.obj.d -o CMakeFiles\Courses.dir\src\main.cpp.obj -c E:\Code\StudentCourses\Courses\src\main.cpp

CMakeFiles/Courses.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Courses.dir/src/main.cpp.i"
	D:\Jetbrains\apps\CLion\ch-0\223.8617.54\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\StudentCourses\Courses\src\main.cpp > CMakeFiles\Courses.dir\src\main.cpp.i

CMakeFiles/Courses.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Courses.dir/src/main.cpp.s"
	D:\Jetbrains\apps\CLion\ch-0\223.8617.54\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\StudentCourses\Courses\src\main.cpp -o CMakeFiles\Courses.dir\src\main.cpp.s

CMakeFiles/Courses.dir/src/student.cpp.obj: CMakeFiles/Courses.dir/flags.make
CMakeFiles/Courses.dir/src/student.cpp.obj: E:/Code/StudentCourses/Courses/src/student.cpp
CMakeFiles/Courses.dir/src/student.cpp.obj: CMakeFiles/Courses.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\StudentCourses\Courses\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Courses.dir/src/student.cpp.obj"
	D:\Jetbrains\apps\CLion\ch-0\223.8617.54\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Courses.dir/src/student.cpp.obj -MF CMakeFiles\Courses.dir\src\student.cpp.obj.d -o CMakeFiles\Courses.dir\src\student.cpp.obj -c E:\Code\StudentCourses\Courses\src\student.cpp

CMakeFiles/Courses.dir/src/student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Courses.dir/src/student.cpp.i"
	D:\Jetbrains\apps\CLion\ch-0\223.8617.54\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\StudentCourses\Courses\src\student.cpp > CMakeFiles\Courses.dir\src\student.cpp.i

CMakeFiles/Courses.dir/src/student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Courses.dir/src/student.cpp.s"
	D:\Jetbrains\apps\CLion\ch-0\223.8617.54\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\StudentCourses\Courses\src\student.cpp -o CMakeFiles\Courses.dir\src\student.cpp.s

# Object files for target Courses
Courses_OBJECTS = \
"CMakeFiles/Courses.dir/src/main.cpp.obj" \
"CMakeFiles/Courses.dir/src/student.cpp.obj"

# External object files for target Courses
Courses_EXTERNAL_OBJECTS =

Courses.exe: CMakeFiles/Courses.dir/src/main.cpp.obj
Courses.exe: CMakeFiles/Courses.dir/src/student.cpp.obj
Courses.exe: CMakeFiles/Courses.dir/build.make
Courses.exe: CMakeFiles/Courses.dir/linklibs.rsp
Courses.exe: CMakeFiles/Courses.dir/objects1.rsp
Courses.exe: CMakeFiles/Courses.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Code\StudentCourses\Courses\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Courses.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Courses.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Courses.dir/build: Courses.exe
.PHONY : CMakeFiles/Courses.dir/build

CMakeFiles/Courses.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Courses.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Courses.dir/clean

CMakeFiles/Courses.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Code\StudentCourses\Courses E:\Code\StudentCourses\Courses E:\Code\StudentCourses\Courses\cmake-build-debug E:\Code\StudentCourses\Courses\cmake-build-debug E:\Code\StudentCourses\Courses\cmake-build-debug\CMakeFiles\Courses.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Courses.dir/depend

