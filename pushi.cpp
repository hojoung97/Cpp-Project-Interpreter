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
    int i = interpreter.memory[Interpreter::pc+1]->getInt() +
              (interpreter.memory[Interpreter::pc+2]->getInt()) * pow(2, 8) +
              (interpreter.memory[Interpreter::pc+3]->getInt()) * pow(3, 16) +
              (interpreter.memory[Interpreter::pc+3]->getInt()) * pow(4, 24);

    interpreter.rstacks[++(interpreter.sp)] = new Value(i);
    Interpreter::pc += 5;

    return 4;
}