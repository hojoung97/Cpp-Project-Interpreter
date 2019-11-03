//
// Created by yul hee cho on 31/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_PEEKI_H
#define CPPPROJECTINTERPRETER_PEEKI_H

#include "bytecode.h"

class Peeki : public Bytecode{
public:
    Peeki();
    virtual ~Peeki();
    void execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_PEEKI_H
