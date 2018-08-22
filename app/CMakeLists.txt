
cmake_minimum_required(VERSION 3.4.1)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../s2/src/main/cpp/s2/include)


add_library(s2 STATIC IMPORTED)
set_target_properties(s2 PROPERTIES IMPORTED_LOCATION
    ${CMAKE_CURRENT_SOURCE_DIR}/../libs/s2/${ANDROID_ABI}/libs2.a)

add_library(s1 STATIC IMPORTED)
set_target_properties(s1 PROPERTIES IMPORTED_LOCATION
    ${CMAKE_CURRENT_SOURCE_DIR}/../libs/s1/${ANDROID_ABI}/libs1.a)

add_library( native-lib
             SHARED
             src/main/cpp/native-lib.cpp )


find_library( log-lib
              log )


target_link_libraries( native-lib
                       s2
                       s1
                       ${log-lib} )
