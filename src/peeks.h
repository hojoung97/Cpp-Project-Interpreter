//
// Created by yul hee cho on 31/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_PEEKS_H
#define CPPPROJECTINTERPRETER_PEEKS_H

#include "bytecode.h"

class Peeks : public Bytecode{
public:
    Peeks();
    virtual ~Peeks();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_PEEKS_H
