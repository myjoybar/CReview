cmake_minimum_required(VERSION 3.13)
project(CReview)
set(CMAKE_CXX_STANDARD 14)
add_executable(CReview main.cpp )
add_executable(CReview1 ./c/src/main/Test1.c)
add_executable(CReview2 ./cplus/src/main/Test1.cpp)