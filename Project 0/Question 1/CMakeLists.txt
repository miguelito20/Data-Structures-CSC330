cmake_minimum_required(VERSION 3.3)
project(Question_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp complex.h)
add_executable(Question_1 ${SOURCE_FILES})