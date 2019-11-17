//
// Created by yul hee cho on 31/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_PEEKC_H
#define CPPPROJECTINTERPRETER_PEEKC_H

#include "bytecode.h"

class Peekc : public Bytecode{
public:
    Peekc();
    virtual ~Peekc();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_PEEKC_H
