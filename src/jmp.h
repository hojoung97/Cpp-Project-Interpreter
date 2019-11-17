//
// Created by yul hee cho on 27/10/2019.
//

#ifndef CPPPROJECTINTERPRETER_JMP_H
#define CPPPROJECTINTERPRETER_JMP_H

#include "bytecode.h"
#include "runTimeStack.h"
#include "fpstack.h"

class Jmp : public Bytecode{
public:
    Jmp();
    virtual ~Jmp();
    int execute(Interpreter&);
};

#endif //CPPPROJECTINTERPRETER_JMP_H
