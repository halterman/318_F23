cmake_minimum_required(VERSION 3.22.0)
project(isascending)

set(CMAKE_CXX_STANDARD 20)
if(MSVC) # Visual C++ (Microsoft Windows)
    add_compile_options(/W4 /EHsc)
else() # GCC and Clang  (macOS and Linux)
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(isascending 
               isascending.cpp 
               randrange.cpp
               randrange.h 
               stopwatch.cpp 
               stopwatch.h)

#set(CMAKE_SUPPRESS_REGENERATION true)

