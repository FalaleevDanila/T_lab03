cmake_minimum_required(VERSION 3.14)
project(lab3)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab3 main.cpp includes/functions.h sources/functions.cpp includes/display.h sources/display.cpp)