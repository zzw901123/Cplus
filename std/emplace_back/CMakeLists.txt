cmake_minimum_required(VERSION 3.16)
project(emplace_back_test)

ADD_COMPILE_OPTIONS(-std=c++11 )
ADD_COMPILE_OPTIONS(-std=c++14 )
set( CMAKE_CXX_FLAGS "-std=c++11 -O3" )


add_executable(emplace_back_test emplace_back_test.cpp)