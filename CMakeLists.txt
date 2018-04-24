cmake_minimum_required(VERSION 3.9)
project(mastermind)

set(CMAKE_CXX_STANDARD 11)

#Add the google test subdirectory
add_subdirectory(lib/googletest)

#include googletest/include dir
include_directories(lib/googletest/include)

#include the googlemock/include dir
#include_directories(googlemock/include)

add_library(mastermind source/mastermind.cpp source/mastermind.h)

add_executable(tests main_.cpp source/mastermind.cpp)

#Link with GoogleTest
target_link_libraries(mastermind gtest gtest.h)

#Link with GoogleMock
#target_link_libraries(EXECUTABLE_NAME gmock gmock_main)