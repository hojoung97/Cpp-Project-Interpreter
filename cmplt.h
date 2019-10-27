//
// Created by yul hee cho on 27/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_CMPLT_H
#define CPPPROJECTINTERPRETER_CMPLT_H

#include "bytecode.h"
#include "runTimeStack.h"
#include "fpstack.h"

class Cmplt : public Bytecode{
public:
    void execute(Fpstack *fpStack, RunTimeStack *rStack);
};

#endif //CPPPROJECTINTERPRETER_CMPLT_H