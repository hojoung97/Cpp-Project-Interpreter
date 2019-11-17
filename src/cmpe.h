//
// Created by yul hee cho on 27/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_CMPE_H
#define CPPPROJECTINTERPRETER_CMPE_H

#include "bytecode.h"
#include "interpreter.h"

class Cmpe : public Bytecode{
public:
    Cmpe();
    virtual ~Cmpe();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_CMPE_H
