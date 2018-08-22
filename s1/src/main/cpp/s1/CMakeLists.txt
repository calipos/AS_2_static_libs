
cmake_minimum_required(VERSION 3.4.1)

set(CMAKE_VERBOSE_MAKEFILE on)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(s1 STATIC src/s1.cpp)


set(distribution_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../../../../libs)
set_target_properties(s1
                      PROPERTIES
                      ARCHIVE_OUTPUT_DIRECTORY
                      "${distribution_DIR}/s1/${ANDROID_ABI}")

