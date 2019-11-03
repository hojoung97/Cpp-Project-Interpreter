//
// Created by Hojoung Jang on 11/1/19.
//

#ifndef CPPPROJECTINTERPRETER_SUB_H
#define CPPPROJECTINTERPRETER_SUB_H

#include "bytecode.h"

class Sub : public Bytecode {
public:
    Sub();
    virtual ~Sub();
    void execute(Interpreter&);
};


#endif //CPPPROJECTINTERPRETER_SUB_H
