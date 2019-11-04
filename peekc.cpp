//
// Created by yul hee cho on 31/10/2019.
//

#include "peekc.h"

Peekc::Peekc(){

}

Peekc::~Peekc(){

}

int Peekc::execute(Interpreter &interpreter) {
    char newChar =
            static_cast<Value*>(interpreter.rstacks[interpreter.fpstacks[interpreter.fpsp]->val + interpreter.rstacks[interpreter.sp]->getInt() + 1])->getChar();
    interpreter.rstacks[interpreter.fpstacks[interpreter.fpsp]->val + interpreter.rstacks[interpreter.sp - 1]->getInt() + 1] = new Value(newChar);
}