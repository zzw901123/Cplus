cmake_minimum_required(VERSION 3.16)
project(optional_test)

ADD_COMPILE_OPTIONS(-std=c++11 )
ADD_COMPILE_OPTIONS(-std=c++14 )
ADD_COMPILE_OPTIONS(-std=c++17 )
set( CMAKE_CXX_FLAGS "-std=c++11 -O3" )


add_executable(optional_test optional_test.cpp)