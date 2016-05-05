cmake_minimum_required(VERSION 3.3)
project(Link-Based-Array)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Linkedbag.cpp)
add_executable(Link-Based-Array ${SOURCE_FILES})