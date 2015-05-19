cmake_minimum_required(VERSION 3.2)
project(HW7_GraphColoring)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(HW7_GraphColoring ${SOURCE_FILES} vertex.cpp vertex.h graph.cpp graph.h)