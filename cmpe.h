//
// Created by yul hee cho on 27/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_CMPE_H
#define CPPPROJECTINTERPRETER_CMPE_H

#include "bytecode.h"
#include "runTimeStack.h"
#include "fpstack.h"

class Cmpe : public Bytecode{
public:
    void execute(Fpstack *fpStack, RunTimeStack *rStack);
};

#endif //CPPPROJECTINTERPRETER_CMPE_H
