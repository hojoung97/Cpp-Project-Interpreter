//
// Created by yul hee cho on 31/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_POKES_H
#define CPPPROJECTINTERPRETER_POKES_H

#include "Bytecode.h"

class Pokes : public Bytecode{
public:
    Pokes();
    virtual ~Pokes();
    void execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_POKES_H
