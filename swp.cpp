//
// Created by yul hee cho on 31/10/2019.
//

#include "swp.h"

Swp::Swp(){

}

Swp::~Swp(){

}

void Swp::execute(Interpreter &interpreter) {
    Value *tmp = interpreter.rstacks[interpreter.sp - 1];
    interpreter.rstacks[interpreter.sp - 1] = interpreter.rstacks[interpreter.sp];
    interpreter.rstacks[interpreter.sp] = tmp;
}