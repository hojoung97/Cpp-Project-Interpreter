//
// Created by yul hee cho on 27/10/2019.
//

#include "jmp.h"
#include "interpreter.h"

void Jmp :: execute(Fpstack *fpStack, RunTimeStack *rStack){
    Interpreter::pc = rStack[rStack->sp];
    rStack->sp--;
}