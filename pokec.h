//
// Created by yul hee cho on 31/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_POKEC_H
#define CPPPROJECTINTERPRETER_POKEC_H

#include "bytecode.h"

class Pokec : public Bytecode{
public:
    Pokec();
    virtual ~Pokec();
    void execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_POKEC_H
