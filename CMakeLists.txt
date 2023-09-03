cmake_minimum_required(VERSION 3.27.4 FATAL_ERROR)

project(FirstCMake)

add_executable(FirstCMake src/main.cpp)

include_directories(${src})