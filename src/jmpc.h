//
// Created by yul hee cho on 27/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_JMPC_H
#define CPPPROJECTINTERPRETER_JMPC_H

#include "bytecode.h"
#include "runTimeStack.h"
#include "fpstack.h"

class Jmpc : public Bytecode {
public:
    Jmpc();
    virtual ~Jmpc();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_JMPC_H
