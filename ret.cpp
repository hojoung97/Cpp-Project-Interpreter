//
// Created by yul hee cho on 27/10/2019.
//

#include "ret.h"
#include "interpreter.h"

void Ret ::execute(Fpstack *fpStack, RunTimeStack *rStack) {
    rStack->sp = fpStack->getTop();
    fpStack->pop();
    Interpreter::pc = rStack[rStack->sp--];
}