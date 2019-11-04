//
// Created by yul hee cho on 30/10/2019.
//

#include "popv.h"

Popv::Popv() {

}

Popv::~Popv() {

}

int Popv::execute(Interpreter &interpreter) {
    //modify the target(Not yet solved)
    interpreter.rstacks[interpreter.fpstacks[interpreter.fpsp]->val + interpreter.rstacks[interpreter.sp]->getInt() + 1] =
            interpreter.rstacks[interpreter.sp - 1];

    interpreter.sp -= 2;

    return 1;
}
