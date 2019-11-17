//
// Created by Hojoung Jang on 10/30/19.
//

#include <cmath>
#include "pushs.h"

Pushs::Pushs() {

}

Pushs::~Pushs() {

}

int Pushs::execute(Interpreter &interpreter) {
    unsigned char byte1 = (unsigned char)(interpreter.memory[Interpreter::pc+1]->getChar());
    unsigned char byte2 = (unsigned char)(interpreter.memory[Interpreter::pc+2]->getChar());

    short s = (short)byte1 + ((short)byte2) * pow(2, 8);

    interpreter.rstacks[++(interpreter.sp)] = new Value(s);
    Interpreter::pc += 3;

    return 0;
}