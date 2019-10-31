//
// Created by yul hee cho on 31/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_PEEKS_H
#define CPPPROJECTINTERPRETER_PEEKS_H

#include "Bytecode.h"

class Peeks : public Bytecode{
public:
    Peeks();
    virtual ~Peeks();
    void execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_PEEKS_H
