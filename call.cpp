//
// Created by yul hee cho on 27/10/2019.
//

#include "call.h"
#include "interpreter.h"

void Call::execute(Fpstack *fpStack, RunTimeStack *rStack){
    fpStack->push(rStack->sp - rStack[rStack->sp] - 1);
    rStack->sp--;
    Interpreter::pc = rStack[rStack->sp--];
}