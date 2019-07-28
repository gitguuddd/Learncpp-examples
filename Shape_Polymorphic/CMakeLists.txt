cmake_minimum_required(VERSION 3.13)
project(Shape_Polymorphic)

set(CMAKE_CXX_STANDARD 14)

add_executable(Shape_Polymorphic main.cpp Shape.cpp Shape.h Triangle.cpp Triangle.h Circle.cpp Circle.h Point.cpp Point.h)