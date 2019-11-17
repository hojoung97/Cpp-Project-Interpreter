//
// Created by yul hee cho on 30/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_POPV_H
#define CPPPROJECTINTERPRETER_POPV_H

#include "bytecode.h"

class Popv : public Bytecode {
public:
    Popv();
    virtual ~Popv();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_POPV_H
