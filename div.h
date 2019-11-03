//
// Created by Hojoung Jang on 11/1/19.
//

#ifndef CPPPROJECTINTERPRETER_DIV_H
#define CPPPROJECTINTERPRETER_DIV_H


#include "bytecode.h"

class Div : public Bytecode {
public:
    Div();
    virtual ~Div();
    void execute(Interpreter&);
};


#endif //CPPPROJECTINTERPRETER_DIV_H
