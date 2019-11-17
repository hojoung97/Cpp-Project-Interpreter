//
// Created by yul hee cho on 30/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_PUSHVI_H
#define CPPPROJECTINTERPRETER_PUSHVI_H

#include "bytecode.h"

class Pushvi : public Bytecode {
public:
    Pushvi();
    virtual ~Pushvi();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_PUSHVI_H
