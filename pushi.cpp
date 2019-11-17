//
// Created by yul hee cho on 30/10/2019.
//
#include "pushi.h"
#include <cmath>

Pushi::Pushi() {
}

Pushi::~Pushi() {
}

int Pushi::execute(Interpreter &interpreter) {
    unsigned char byte1 = (unsigned char)(interpreter.memory[Interpreter::pc+1]->getChar());
    unsigned char byte2 = (unsigned char)(interpreter.memory[Interpreter::pc+2]->getChar());
    unsigned char byte3 = (unsigned char)(interpreter.memory[Interpreter::pc+3]->getChar());
    unsigned char byte4 = (unsigned char)(interpreter.memory[Interpreter::pc+4]->getChar());

    int i = (int)byte1 + ((int)byte2) * pow(2, 8) + ((int)byte3) * pow(2, 16) +
            ((int)byte4) * pow(2, 24);

    interpreter.rstacks[++(interpreter.sp)] = new Value(i);
    Interpreter::pc += 5;

    return 0;
}