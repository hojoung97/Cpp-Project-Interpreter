//
// Created by yul hee cho on 31/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_POPA_H
#define CPPPROJECTINTERPRETER_POPA_H

#include "bytecode.h"

class Popa : public Bytecode {
public:
    Popa();
    virtual ~Popa();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_POPA_H
