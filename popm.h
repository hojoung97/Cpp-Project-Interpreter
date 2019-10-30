//
// Created by Hojoung Jang on 10/30/19.
//

#ifndef CPPPROJECTINTERPRETER_POPM_H
#define CPPPROJECTINTERPRETER_POPM_H


#include "bytecode.h"

class Popm : public Bytecode {
public:
    Popm();
    virtual ~Popm();
    void execute(Interpreter&);
};


#endif //CPPPROJECTINTERPRETER_POPM_H
