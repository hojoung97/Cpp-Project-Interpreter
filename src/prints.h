//
// Created by yul hee cho on 02/11/2019.
//

#ifndef CPPPROJECTINTERPRETER_PRINTS_H
#define CPPPROJECTINTERPRETER_PRINTS_H

#include "bytecode.h"

class Prints : public Bytecode{
public:
    Prints();
    virtual ~Prints();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_PRINTS_H
