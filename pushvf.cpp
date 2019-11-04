//
// Created by yul hee cho on 30/10/2019.
//

#include "pushvf.h"

Pushvf::Pushvf() {

}

Pushvf::~Pushvf() {

}

int Pushvf::execute(Interpreter &interpreter) {
    int fpstackVal = interpreter.fpstacks[interpreter.fpsp]->val;
    int rstackVal = interpreter.rstacks[interpreter.sp]->getInt();
    float floatVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getFloat();
    interpreter.rstacks[interpreter.sp] = new Value(floatVal);
}
