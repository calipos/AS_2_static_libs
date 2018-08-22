
cmake_minimum_required(VERSION 3.4.1)

set(CMAKE_VERBOSE_MAKEFILE on)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../../../../s1/src/main/cpp/s1/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(s2 STATIC src/s2.cpp)


set(distribution_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../../../../libs)
set_target_properties(s2
                      PROPERTIES
                      ARCHIVE_OUTPUT_DIRECTORY
                      "${distribution_DIR}/s2/${ANDROID_ABI}")

