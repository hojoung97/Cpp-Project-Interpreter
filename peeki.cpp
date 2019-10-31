//
// Created by yul hee cho on 31/10/2019.
//

#include "peeki.h"

Peeki::Peeki(){

}

Peeki::~Peeki(){

}

void Peeki::execute(Interpreter &interpreter) {
    int newInt =
            static_cast<Value*>(interpreter.rstacks[interpreter.fpstacks[interpreter.fpsp]->val + interpreter.rstacks[interpreter.sp]->getInt() + 1])->getInt();
    interpreter.rstacks[interpreter.fpstacks[interpreter.fpsp]->val + interpreter.rstacks[interpreter.sp - 1]->getInt() + 1] = new Value(newInt);
}