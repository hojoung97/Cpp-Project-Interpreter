//
// Created by yul hee cho on 02/11/2019.
//

#include "halt.h"

Halt::Halt(){

}

Halt::~Halt(){

}

void Halt::execute(Interpreter &interpreter) {
    printf("pc: %d\n", interpreter.pc);

    printf("sp: %d\n", interpreter.sp);

    if(interpreter.sp == -1){
        printf("Rstack empty\n");
    } else{
        if (!((interpreter.rstacks[interpreter.sp - 1])->dtype.compare("short"))) {
            while (interpreter.sp != -1) {
                printf("Current Rstack: %s\n", interpreter.rstacks[interpreter.sp]->getShort());
                interpreter.sp--;
            }
        } else if(!((interpreter.rstacks[interpreter.sp - 1])->dtype.compare("char"))) {
            while (interpreter.sp != -1) {
                printf("Current Rstack: %c\n", interpreter.rstacks[interpreter.sp]->getChar());
                interpreter.sp--;
            }
        } else if(!((interpreter.rstacks[interpreter.sp - 1])->dtype.compare("int"))) {
            while (interpreter.sp != -1) {
                printf("Current Rstack: %d\n", interpreter.rstacks[interpreter.sp]->getInt());
                interpreter.sp--;
            }
        } else if(!((interpreter.rstacks[interpreter.sp - 1])->dtype.compare("float"))) {
            while (interpreter.sp != -1) {
                printf("Current Rstack: %f\n", interpreter.rstacks[interpreter.sp]->getFloat());
                interpreter.sp--;
            }
        }
    }

    printf("fpsp: %d\n", interpreter.fpsp);

    if(interpreter.fpsp == -1){
        printf("Fpstack empty\n");
    } else{
        while(interpreter.fpsp != -1){
            printf("Current Fpstack: %d\n", interpreter.fpstacks[interpreter.fpsp]->val);
            interpreter.fpsp--;
        }
    }
}