cmake_minimum_required(VERSION 3.16)
project(vector_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(include)

#Add the google test subdirectory
add_subdirectory(test/googletest)

#include googletest/include dir
include_directories(test/googletest/googletest/include)

#include the googlemock/include dir
include_directories(test/googletest/googlemock/include)


add_executable(vector_cpp
        include/Dvec.hpp
        include/testing.hpp
        CHANGELOG
        LICENSE
        main.cpp
        README.md)


#Link with GoogleTest
target_link_libraries(vector_cpp gtest gtest_main)

#Link with GoogleMock
target_link_libraries(vector_cpp gmock gmock_main)