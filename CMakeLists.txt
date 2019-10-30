cmake_minimum_required(VERSION 3.15)
project(CppProjectInterpreter)

set(CMAKE_CXX_STANDARD 14)

add_executable(CppProjectInterpreter main.cpp
        interpreter.h interpreter.cpp
        fpstack.h fpstack.cpp
        memory.cpp memory.h
        bytecode.cpp bytecode.h
        runTimeStack.cpp runTimeStack.h
        value.cpp value.h
        cmpe.h cmpe.cpp
        )