cmake_minimum_required(VERSION 3.22.0)
project(jeff)

set(CMAKE_CXX_STANDARD 20)

if (MSVC) # For Microsoft Visual C++
    add_compile_options(/W4 /EHsc)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -g)
endif()

add_executable(jeff 
               testascend.cpp 
               ascend.cpp 
               ascend.h)