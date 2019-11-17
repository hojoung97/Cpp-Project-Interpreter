//
// Created by yul hee cho on 30/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_PUSHI_H
#define CPPPROJECTINTERPRETER_PUSHI_H

#include "interpreter.h"
#include "bytecode.h"

class Pushi : public Bytecode{
public:
    Pushi();
    virtual ~Pushi();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_PUSHI_H
