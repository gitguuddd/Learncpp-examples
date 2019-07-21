cmake_minimum_required(VERSION 3.13)
project(Random_Monster_Generator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Random_Monster_Generator main.cpp Monster.cpp Monster.h MonsterGenerator.cpp MonsterGenerator.h)