//
// Created by Hojoung Jang on 10/27/19.
//

#ifndef CPPPROJECTINTERPRETER_VALUE_H
#define CPPPROJECTINTERPRETER_VALUE_H


#include "memory.h"
#include "runTimeStack.h"

class Value /*: public Memory, public RunTimeStack*/{
// the only one value will be represented
// everything else will be null
private:
    char* charVal;
    short* shortVal;
    int* intVal;
    float* floatVal;

public:
    Value(char);
    Value(short);
    Value(int);
    Value(float);
    virtual ~Value();

    void execute();
    char getChar();
    short getShort();
    int getInt();
    float getFloat();
};


#endif //CPPPROJECTINTERPRETER_VALUE_H
