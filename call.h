//
// Created by yul hee cho on 27/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_CALL_H
#define CPPPROJECTINTERPRETER_CALL_H

#include "Bytecode.h"
#include "runTimeStack.h"
#include "fpstack.h"

class Call : public Bytecode{
public:
    void execute(Fpstack *fpStack, RunTimeStack *rStack);
};

#endif //CPPPROJECTINTERPRETER_CALL_H
