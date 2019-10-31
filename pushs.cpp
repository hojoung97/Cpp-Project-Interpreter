//
// Created by Hojoung Jang on 10/30/19.
//

#include <cmath>
#include "pushs.h"

Pushs::Pushs() {

}

Pushs::~Pushs() {

}

void Pushs::execute(Interpreter &interpreter) {
    short s = interpreter.memory[Interpreter::pc+1]->getShort() +
            (interpreter.memory[Interpreter::pc+2]->getShort()) * pow(2, 8);

    interpreter.rstacks[++(interpreter.sp)] = new Value(s);
    Interpreter::pc += 3;
}