cmake_minimum_required(VERSION 3.16)
project(vector_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(include)

add_executable(vector_cpp
        include/Dvec.hpp
        include/testing.hpp
        CHANGELOG
        LICENSE
        main.cpp
        README.md)
