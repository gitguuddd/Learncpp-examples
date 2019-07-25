cmake_minimum_required(VERSION 3.13)
project(Simple_Game)

set(CMAKE_CXX_STANDARD 14)

add_executable(Simple_Game main.cpp Creature.cpp Creature.h Player.cpp Player.h Monster.cpp Monster.h)