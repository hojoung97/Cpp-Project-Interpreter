//
// Created by yul hee cho on 30/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_PUSHF_H
#define CPPPROJECTINTERPRETER_PUSHF_H

#include "interpreter.h"
#include "bytecode.h"

class Pushf : public Bytecode{
public:
    Pushf();
    virtual ~Pushf();
    void execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_PUSHF_H
