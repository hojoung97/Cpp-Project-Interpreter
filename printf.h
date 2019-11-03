//
// Created by yul hee cho on 02/11/2019.
//

#ifndef CPPPROJECTINTERPRETER_PRINTF_H
#define CPPPROJECTINTERPRETER_PRINTF_H

#include "bytecode.h"

class Printf : public Bytecode{
public:
    Printf();
    virtual ~Printf();
    void execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_PRINTF_H
