//
// Created by yul hee cho on 02/11/2019.
//

#ifndef CPPPROJECTINTERPRETER_PRINTC_H
#define CPPPROJECTINTERPRETER_PRINTC_H

#include "bytecode.h"

class Printc : public Bytecode{
public:
    Printc();
    virtual ~Printc();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_PRINTC_H
