cmake_minimum_required(VERSION 3.13)
project(Fruit_Inheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(Fruit_Inheritance main.cpp Fruit.cpp Fruit.h Banana.cpp Banana.h Apple.cpp Apple.h)