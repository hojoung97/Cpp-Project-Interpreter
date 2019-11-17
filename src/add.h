//
// Created by yul hee cho on 31/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_ADD_H
#define CPPPROJECTINTERPRETER_ADD_H

#include "bytecode.h"

class Add : public Bytecode{
public:
    Add();
    virtual ~Add();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_ADD_H
