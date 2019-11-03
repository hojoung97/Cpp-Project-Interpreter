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
        jmpc.h jmpc.cpp
        call.h call.cpp
        ret.h ret.cpp
        pushc.h pushc.cpp
        pushvc.cpp pushvc.h
        popm.cpp popm.h
        pushs.cpp pushs.h
        pushi.h pushi.cpp
        pushf.h pushf.cpp
        pushvi.h pushvi.cpp
        pushvs.h pushvs.cpp
        pushvf.h pushvf.cpp
        popv.h popv.cpp
        popa.h popa.cpp
        peekc.h peekc.cpp
        peeks.h peeks.cpp
        peeki.h peeki.cpp
        peekf.h peekf.cpp
        pokec.h pokec.cpp
        pokes.h pokes.cpp
        pokei.h pokei.cpp
        pokef.h pokef.cpp
        swp.h swp.cpp
        add.h add.cpp sub.cpp sub.h mul.cpp mul.h div.cpp div.h printc.h printc.cpp prints.h prints.cpp printi.h printi.cpp printf.h printf.cpp halt.h halt.cpp)