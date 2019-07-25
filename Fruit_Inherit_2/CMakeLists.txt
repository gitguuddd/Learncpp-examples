cmake_minimum_required(VERSION 3.13)
project(Fruit_Inherit_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Fruit_Inherit_2 main.cpp Fruit.cpp Fruit.h Apple.cpp Apple.h Banana.cpp Banana.h GrannySmith.cpp GrannySmith.h)