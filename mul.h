//
// Created by Hojoung Jang on 11/1/19.
//

#ifndef CPPPROJECTINTERPRETER_MUL_H
#define CPPPROJECTINTERPRETER_MUL_H


#include "bytecode.h"

class Mul : public Bytecode {
public:
    Mul();
    virtual ~Mul();
    void execute(Interpreter&);
};


#endif //CPPPROJECTINTERPRETER_MUL_H
