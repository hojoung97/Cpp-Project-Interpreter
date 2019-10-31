//
// Created by yul hee cho on 30/10/2019.
//

#include <cmath>
#include "pushf.h"

Pushf::Pushf() {

}

Pushf::~Pushf() {

}

void Pushf::execute(Interpreter &interpreter) {
    float f = interpreter.memory[Interpreter::pc+1]->getFloat() +
            (interpreter.memory[Interpreter::pc+2]->getFloat()) * pow(2, 8) +
            (interpreter.memory[Interpreter::pc+3]->getFloat()) * pow(3, 16) +
            (interpreter.memory[Interpreter::pc+3]->getFloat()) * pow(4, 24);

    interpreter.rstacks[++(interpreter.sp)] = new Value(f);
    Interpreter::pc += 5;
}