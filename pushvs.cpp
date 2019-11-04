//
// Created by yul hee cho on 30/10/2019.
//

#include "pushvs.h"

Pushvs::Pushvs() {

}

Pushvs::~Pushvs() {

}

int Pushvs::execute(Interpreter &interpreter) {
    int fpstackVal = interpreter.fpstacks[interpreter.fpsp]->val;
    int rstackVal = interpreter.rstacks[interpreter.sp]->getInt();
    short shortVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getShort();
    interpreter.rstacks[interpreter.sp] = new Value(shortVal);
}
