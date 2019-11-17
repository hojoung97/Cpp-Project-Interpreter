//
// Created by Hojoung Jang on 10/30/19.
//

#ifndef CPPPROJECTINTERPRETER_PUSHVC_H
#define CPPPROJECTINTERPRETER_PUSHVC_H


#include "bytecode.h"

class Pushvc : public Bytecode {
public:
    Pushvc();
    virtual ~Pushvc();
    int execute(Interpreter&);
};


#endif //CPPPROJECTINTERPRETER_PUSHVC_H
