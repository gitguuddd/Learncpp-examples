cmake_minimum_required(VERSION 3.13)
project(Animal_inherit)

set(CMAKE_CXX_STANDARD 14)

add_executable(Animal_inherit Animal.h Animal.cpp main.cpp Cat.cpp Cat.h Dog.cpp Dog.h)