//
// Created by Hojoung Jang on 10/27/19.
//

#ifndef CPPPROJECTINTERPRETER_MEMORY_H
#define CPPPROJECTINTERPRETER_MEMORY_H

#include <iostream>

class Memory {
public:
    virtual void execute() = 0;
    virtual char getChar() = 0;
    virtual short getShort() = 0;
    virtual int getInt() = 0;
    virtual float getFloat() = 0;

    friend std::ostream& operator << (std::ostream&, const Memory&);
};




#endif //CPPPROJECTINTERPRETER_MEMORY_H
