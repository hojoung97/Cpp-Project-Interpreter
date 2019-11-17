//
// Created by yul hee cho on 31/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_POKEI_H
#define CPPPROJECTINTERPRETER_POKEI_H

#include "bytecode.h"

class Pokei : public Bytecode{
public:
    Pokei();
    virtual ~Pokei();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_POKEI_H
