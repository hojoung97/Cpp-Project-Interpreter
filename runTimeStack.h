//
// Created by Hojoung Jang on 10/27/19.
//

#ifndef CPPPROJECTINTERPRETER_RUNTIMESTACK_H
#define CPPPROJECTINTERPRETER_RUNTIMESTACK_H


#include "value.h"

class RunTimeStack {
private:
    //Value value;

public:
    virtual char getChar() = 0;
    virtual short getShort() = 0;
    virtual int getInt() = 0;
    virtual float getFloat() = 0;
};


#endif //CPPPROJECTINTERPRETER_RUNTIMESTACK_H
