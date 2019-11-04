//
// Created by yul hee cho on 27/10/2019.
//

#include "pushc.h"
#include "interpreter.h"

Pushc::Pushc() {

}

Pushc::~Pushc() {

}

int Pushc::execute(Interpreter& interpreter) {
    // new char value
    char newChar = static_cast<Value*>(interpreter.memory[Interpreter::pc + 1])->getChar();
    interpreter.rstacks[++(interpreter.sp)] = new Value(newChar);
    Interpreter::pc += 2;
}
