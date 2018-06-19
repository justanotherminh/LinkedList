cmake_minimum_required(VERSION 3.9)
project(LinkedList)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp LinkedList.h LinkedList.tpp)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -v")
#add_library(LinkedList ${SOURCE_FILES})
add_executable(LinkedList ${SOURCE_FILES})