//
// Created by Hojoung Jang on 10/30/19.
//

#ifndef CPPPROJECTINTERPRETER_PUSHS_H
#define CPPPROJECTINTERPRETER_PUSHS_H


#include "interpreter.h"
#include "bytecode.h"

class Pushs : public Bytecode{
public:
    Pushs();
    virtual ~Pushs();
    void execute(Interpreter&);

};


#endif //CPPPROJECTINTERPRETER_PUSHS_H
