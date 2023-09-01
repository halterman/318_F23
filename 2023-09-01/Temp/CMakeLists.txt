cmake_minimum_required(VERSION 3.22.0)
project(main)

set(CMAKE_CXX_STANDARD 20)

if (MSVC) # For Microsoft Visual C++
    add_compile_options(/W4 /EHsc)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -g)
endif()

add_executable(main main.cpp)
