//
// Created by yul hee cho on 27/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_CMPGT_H
#define CPPPROJECTINTERPRETER_CMPGT_H

#include "bytecode.h"
#include "runTimeStack.h"
#include "fpstack.h"

class Cmpgt : public Bytecode{
public:
    void execute(Fpstack *fpStack, RunTimeStack *rStack);
};

#endif //CPPPROJECTINTERPRETER_CMPGT_H
