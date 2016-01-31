cmake_minimum_required(VERSION 3.3)
project(Question_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp grade.h)
add_executable(Question_2 ${SOURCE_FILES})