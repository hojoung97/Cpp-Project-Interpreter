//
// Created by yul hee cho on 30/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_PUSHVS_H
#define CPPPROJECTINTERPRETER_PUSHVS_H

#include "bytecode.h"

class Pushvs : public Bytecode {
public:
    Pushvs();
    virtual ~Pushvs();
    void execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_PUSHVS_H
