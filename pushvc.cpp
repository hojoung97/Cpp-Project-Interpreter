//
// Created by Hojoung Jang on 10/30/19.
//

#include "pushvc.h"

Pushvc::Pushvc() {

}

Pushvc::~Pushvc() {

}

int Pushvc::execute(Interpreter &interpreter) {
    int fpstackVal = interpreter.fpstacks[interpreter.fpsp]->val;
    int rstackVal = interpreter.rstacks[interpreter.sp]->getInt();
    char charVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getChar();
    interpreter.rstacks[interpreter.sp] = new Value(charVal);

    return 2;
}
