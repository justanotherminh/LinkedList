cmake_minimum_required(VERSION 3.10)
project(LinkedList)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES LinkedList.cpp LinkedList.h main.cpp)
#add_library(LinkedList ${SOURCE_FILES})
add_executable(LinkedList ${SOURCE_FILES})