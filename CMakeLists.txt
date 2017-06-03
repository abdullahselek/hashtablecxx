cmake_minimum_required(VERSION 3.0)
project(hashtablecxx)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES include/hashtablecxx.h source/hashtablecxx.cpp)
add_library(hashtablecxx ${SOURCE_FILES})

enable_testing()
add_subdirectory(test)