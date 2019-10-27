//
// Created by yul hee cho on 27/10/2019.
//

#include "cmplt.h"

void Cmplt::execute(Fpstack *fpStack, RunTimeStack *rStack){
    rStack[rStack->sp - 1] = rStack[rStack->sp - 1] < rStack[rStack->sp];
    rStack->sp--;
}