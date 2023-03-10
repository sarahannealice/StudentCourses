cmake_minimum_required(VERSION 3.24)
project(Courses)

set(CMAKE_CXX_STANDARD 17)

add_executable(Courses src/main.cpp src/student.cpp inc/student.h)
