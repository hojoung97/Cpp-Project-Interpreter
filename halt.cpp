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
        printf("Rstack\n");
    }
    printf("fpsp: %d\n", interpreter.fpsp);
    if(interpreter.fpsp == -1){
        printf("Fpstack empty\n");
    } else{
        printf("Fpstack\n");
    }
}