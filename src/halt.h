//
// Created by yul hee cho on 02/11/2019.
//

#ifndef CPPPROJECTINTERPRETER_HALT_H
#define CPPPROJECTINTERPRETER_HALT_H

#include "bytecode.h"

class Halt : public Bytecode{
public:
    Halt();
    virtual ~Halt();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_HALT_H
