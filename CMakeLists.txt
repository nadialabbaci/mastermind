cmake_minimum_required(VERSION 3.9)
project(mastermind)

set(CMAKE_CXX_STANDARD 11)

add_library(mastermind source/library.cpp source/library.h)
add_executable(tests main_.cpp)
