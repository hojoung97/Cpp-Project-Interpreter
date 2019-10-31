//
// Created by yul hee cho on 27/10/2019.
//

#include "ret.h"
#include "interpreter.h"

Ret::Ret() {

}

Ret::~Ret() {

}

void Ret::execute(Interpreter &interpreter) {
    interpreter.sp = interpreter.fpstacks[(interpreter.fpsp)--]->val;
    Interpreter::pc = interpreter.rstacks[(interpreter.sp)--]->getInt();
}
