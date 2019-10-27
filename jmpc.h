//
// Created by yul hee cho on 27/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_JMPC_H
#define CPPPROJECTINTERPRETER_JMPC_H

#include "Bytecode.h"
#include "runTimeStack.h"
#include "fpstack.h"

class Jmpc : public Bytecode {
public:
    void execute(Fpstack *fpStack, RunTimeStack *rStack);
};

#endif //CPPPROJECTINTERPRETER_JMPC_H
