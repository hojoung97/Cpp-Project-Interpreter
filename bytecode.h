//
// Created by Hojoung Jang on 10/27/19.
//

#ifndef CPPPROJECTINTERPRETER_BYTECODE_H
#define CPPPROJECTINTERPRETER_BYTECODE_H


#include "memory.h"

class Bytecode : public Memory {
public:
    virtual int execute(Interpreter&)=0;
    char getChar();
    short getShort();
    int getInt();
    float getFloat();
};


#endif //CPPPROJECTINTERPRETER_BYTECODE_H