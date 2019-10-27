//
// Created by yul hee cho on 27/10/2019.
//

#include "jmpc.h"
#include "interpreter.h"

void Jmpc :: execute(Fpstack *fpStack, RunTimeStack *rStack){
    if(rStack[rStack->sp - 1]){
        Interpreter::pc = rStack[rStack->sp];
    }
    rStack->sp -= 2;
}