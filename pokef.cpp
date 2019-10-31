//
// Created by yul hee cho on 31/10/2019.
//

#include "pokef.h"

Pokef::Pokef(){

}

Pokef::~Pokef(){

}

void Pokef::execute(Interpreter &interpreter) {
    float newFloat =
            static_cast<Value*>(interpreter.rstacks[interpreter.fpstacks[interpreter.fpsp]->val + interpreter.rstacks[interpreter.sp - 1]->getInt() + 1])->getFloat();
    interpreter.rstacks[interpreter.fpstacks[interpreter.fpsp]->val + interpreter.rstacks[interpreter.sp]->getInt() + 1] = new Value(newFloat);
}