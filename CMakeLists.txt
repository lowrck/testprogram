cmake_minimum_required(VERSION 3.8)
project(testprogram)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp testfile1.cpp testfile1.h)
add_executable(testprogram ${SOURCE_FILES})