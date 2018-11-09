cmake_minimum_required(VERSION 3.12)
project(function_pointers)

set(CMAKE_CXX_STANDARD 14)

add_executable(function_pointers
    main.cpp Button.cpp Button.h)
