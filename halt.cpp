//
// Created by yul hee cho on 02/11/2019.
//

#include "halt.h"

Halt::Halt(){

}

Halt::~Halt(){

}

int Halt::execute(Interpreter &interpreter) {
    std::cout << "pc: " << Interpreter::pc << std::endl;

    std::cout << "sp: " << interpreter.sp << std::endl;

    if(interpreter.sp == -1){
        std::cout << "Rstack empty" << std::endl;
    } else{
        if (!((interpreter.rstacks[interpreter.sp - 1])->dtype.compare("short"))) {
            while (interpreter.sp != -1) {
                std::cout << "Current Rstack: " << interpreter.rstacks[interpreter.sp]->getShort() << std::endl;
                interpreter.sp--;
            }
        } else if(!((interpreter.rstacks[interpreter.sp - 1])->dtype.compare("char"))) {
            while (interpreter.sp != -1) {
                std::cout << "Current Rstack: " << interpreter.rstacks[interpreter.sp]->getChar() << std::endl;
                interpreter.sp--;
            }
        } else if(!((interpreter.rstacks[interpreter.sp - 1])->dtype.compare("int"))) {
            while (interpreter.sp != -1) {
                std::cout << "Current Rstack: " << interpreter.rstacks[interpreter.sp]->getInt() << std::endl;
                interpreter.sp--;
            }
        } else if(!((interpreter.rstacks[interpreter.sp - 1])->dtype.compare("float"))) {
            while (interpreter.sp != -1) {
                std::cout << "Current Rstack: " << interpreter.rstacks[interpreter.sp]->getFloat() << std::endl;
                interpreter.sp--;
            }
        }
    }

    printf("fpsp: %d\n", interpreter.fpsp);

    if(interpreter.fpsp == -1){
        std::cout << "Fpstack empty" << std::endl;
    } else{
        while(interpreter.fpsp != -1){
            std::cout << "Current Fpstack: " << interpreter.fpstacks[interpreter.fpsp]->val << std::endl;
            interpreter.fpsp--;
        }
    }
    return -1;
}