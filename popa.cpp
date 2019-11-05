//
// Created by yul hee cho on 31/10/2019.
//

#include "popa.h"

Popa::Popa() {

}

Popa::~Popa() {

}

int Popa::execute(Interpreter &interpreter) {

    int rstackVal = 0;
    if (((interpreter.rstacks)[interpreter.sp])->dtype == "char") {
        rstackVal = (int)(((interpreter.rstacks)[interpreter.sp])->getChar());

    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "short") {
        rstackVal = ((interpreter.rstacks)[interpreter.sp])->getShort();

    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "int") {
        rstackVal = ((interpreter.rstacks)[interpreter.sp])->getInt();

    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "float") {
        rstackVal = (int)(((interpreter.rstacks)[interpreter.sp])->getFloat());

    }

    for (int i = 1; i <= rstackVal; i++){
        int fpstackVal = ((interpreter.fpstacks)[interpreter.fpsp])->val;

        interpreter.rstacks[fpstackVal + i] =
                interpreter.rstacks[interpreter.sp - rstackVal + (i - 1)];
    }

    if (((interpreter.rstacks)[interpreter.sp])->dtype == "char") {
        rstackVal = (int)(((interpreter.rstacks)[interpreter.sp])->getChar());

    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "short") {
        rstackVal = ((interpreter.rstacks)[interpreter.sp])->getShort();

    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "int") {
        rstackVal = ((interpreter.rstacks)[interpreter.sp])->getInt();

    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "float") {
        rstackVal = (int)(((interpreter.rstacks)[interpreter.sp])->getFloat());

    }

    interpreter.sp = interpreter.fpstacks[interpreter.fpsp]->val + rstackVal;

    return 1;
}