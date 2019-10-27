//
// Created by yul hee cho on 27/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_PUSHC_H
#define CPPPROJECTINTERPRETER_PUSHC_H

#include "bytecode.h"
#include "runTimeStack.h"
#include "fpstack.h"

class Pushc : public Bytecode{
public:
    void execute(Fpstack *fpStack, RunTimeStack *rStack);
};

#endif //CPPPROJECTINTERPRETER_PUSHC_H
