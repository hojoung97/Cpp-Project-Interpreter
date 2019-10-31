//
// Created by yul hee cho on 31/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_PEEKF_H
#define CPPPROJECTINTERPRETER_PEEKF_H

#include "Bytecode.h"

class Peekf : public Bytecode{
public:
    Peekf();
    virtual ~Peekf();
    void execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_PEEKF_H
