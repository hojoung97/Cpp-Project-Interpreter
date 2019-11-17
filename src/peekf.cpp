//
// Created by yul hee cho on 31/10/2019.
//

#include "peekf.h"

Peekf::Peekf(){

}

Peekf::~Peekf(){

}

int Peekf::execute(Interpreter &interpreter) {

    int fpstackVal = interpreter.fpstacks[interpreter.fpsp]->val;

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

    float newFloat = (interpreter.rstacks[fpstackVal + rstackVal + 1])->getFloat();

    if (((interpreter.rstacks)[interpreter.sp - 1])->dtype == "char") {
        rstackVal = (int)(((interpreter.rstacks)[interpreter.sp - 1])->getChar());

    }
    else if (((interpreter.rstacks)[interpreter.sp - 1])->dtype == "short") {
        rstackVal = ((interpreter.rstacks)[interpreter.sp - 1])->getShort();

    }
    else if (((interpreter.rstacks)[interpreter.sp - 1])->dtype == "int") {
        rstackVal = ((interpreter.rstacks)[interpreter.sp - 1])->getInt();

    }
    else if (((interpreter.rstacks)[interpreter.sp - 1])->dtype == "float") {
        rstackVal = (int)(((interpreter.rstacks)[interpreter.sp - 1])->getFloat());

    }

    interpreter.rstacks[fpstackVal + rstackVal + 1] = new Value(newFloat);

    return 1;
}