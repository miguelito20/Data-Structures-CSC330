cmake_minimum_required(VERSION 3.3)
project(FibonacciNumber)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Fibonacci.h maxArray.h)
add_executable(FibonacciNumber ${SOURCE_FILES} Fibonacci.h)