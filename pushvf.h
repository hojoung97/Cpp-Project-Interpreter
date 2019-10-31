//
// Created by yul hee cho on 30/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_PUSHVF_H
#define CPPPROJECTINTERPRETER_PUSHVF_H

#include "bytecode.h"

class Pushvf : public Bytecode {
public:
    Pushvf();
    virtual ~Pushvf();
    void execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_PUSHVF_H
