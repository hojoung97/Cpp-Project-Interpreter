//
// Created by yul hee cho on 31/10/2019.
//

#include "pokes.h"

Pokes::Pokes(){

}

Pokes::~Pokes(){

}

void Pokes::execute(Interpreter &interpreter) {
    short newShort =
            static_cast<Value*>(interpreter.rstacks[interpreter.fpstacks[interpreter.fpsp]->val + interpreter.rstacks[interpreter.sp - 1]->getInt() + 1])->getShort();
    interpreter.rstacks[interpreter.fpstacks[interpreter.fpsp]->val + interpreter.rstacks[interpreter.sp]->getInt() + 1] = new Value(newShort);
}