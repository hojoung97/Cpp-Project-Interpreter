//
// Created by yul hee cho on 27/10/2019.
//

#include "cmpgt.h"

void Cmpgt::execute(Fpstack *fpStack, RunTimeStack *rStack){
    rStack[rStack->sp - 1] = rStack[rStack->sp - 1] > rStack[rStack->sp];
    rStack->sp--;
}