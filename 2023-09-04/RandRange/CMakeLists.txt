cmake_minimum_required(VERSION 3.22.0)
project(testrandrange)

set(CMAKE_CXX_STANDARD 20)

if (MSVC) # For Microsoft Visual C++
    add_compile_options(/W4 /EHsc)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -g)
endif()

add_executable(testrandrange 
               testrand.cpp 
               randrange.cpp 
               randrange.h)
