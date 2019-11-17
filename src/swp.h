//
// Created by yul hee cho on 31/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_SWP_H
#define CPPPROJECTINTERPRETER_SWP_H

#include "bytecode.h"

class Swp : public Bytecode{
public:
    Swp();
    virtual ~Swp();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_SWP_H
