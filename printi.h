//
// Created by yul hee cho on 02/11/2019.
//

#ifndef CPPPROJECTINTERPRETER_PRINTI_H
#define CPPPROJECTINTERPRETER_PRINTI_H

#include "bytecode.h"

class Printi : public Bytecode{
public:
    Printi();
    virtual ~Printi();
    void execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_PRINTI_H
