cmake_minimum_required(VERSION 3.15)
project(CppProjectInterpreter)

set(CMAKE_CXX_STANDARD 14)

add_executable(CppProjectInterpreter main.cpp
        interpreter.h interpreter.cpp
        rstack.h rstack.cpp
        fpstack.h fpstack.cpp)