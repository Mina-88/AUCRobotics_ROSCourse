cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "-std=c++")

project(nameCppCmake)

add_executable(
    nameCppCmake
    name.cpp
)