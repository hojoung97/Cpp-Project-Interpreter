//
// Created by yul hee cho on 30/10/2019.
//

#include <cmath>
#include "pushf.h"
#include <cstring>

Pushf::Pushf() {

}

Pushf::~Pushf() {

}

int Pushf::execute(Interpreter &interpreter) {
    unsigned char byte1 = (unsigned char)(interpreter.memory[Interpreter::pc+1]->getChar());
    unsigned char byte2 = (unsigned char)(interpreter.memory[Interpreter::pc+2]->getChar());
    unsigned char byte3 = (unsigned char)(interpreter.memory[Interpreter::pc+3]->getChar());
    unsigned char byte4 = (unsigned char)(interpreter.memory[Interpreter::pc+4]->getChar());

    unsigned char b[] = {byte1, byte2, byte3, byte4};
    float newFloat;
    memcpy(&newFloat, &b, sizeof(newFloat));

    interpreter.rstacks[++(interpreter.sp)] = new Value(newFloat);
    Interpreter::pc += 5;

    return 0;
}