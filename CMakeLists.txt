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
        cmplt.h cmplt.cpp
        cmpgt.h cmpgt.cpp
        jmp.h jmp.cpp
        call.h call.cpp
        pushc.h pushc.cpp
        pushvc.cpp pushvc.h popm.cpp popm.h)