//
// Created by yul hee cho on 31/10/2019.
//

#include "popa.h"

Popa::Popa() {

}

Popa::~Popa() {

}

void Popa::execute(Interpreter &interpreter) {
    //Not yet solved
    for (int i = 0; i <=interpreter.rstacks[interpreter.sp]->getInt(); i++){
        interpreter.rstacks[interpreter.fpstacks[interpreter.fpsp]->val + (i + 1)] =
                interpreter.rstacks[interpreter.sp - interpreter.rstacks[interpreter.sp]->getInt() + i];
    }

    interpreter.sp = interpreter.fpstacks[interpreter.fpsp]->val + interpreter.rstacks[interpreter.sp]->getInt();
}