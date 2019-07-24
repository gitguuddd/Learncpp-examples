cmake_minimum_required(VERSION 3.13)
project(Dept_Teacher_Aggregation)

set(CMAKE_CXX_STANDARD 14)

add_executable(Dept_Teacher_Aggregation main.cpp Department.h Department.cpp Teacher.cpp Teacher.h)