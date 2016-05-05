cmake_minimum_required(VERSION 3.3)
project(Circular_Array)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Queue.cpp Queue.h)
add_executable(Circular_Array ${SOURCE_FILES})