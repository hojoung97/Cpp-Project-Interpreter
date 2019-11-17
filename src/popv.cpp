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
    int fpstackVal = ((interpreter.fpstacks)[interpreter.fpsp])->val;

    if (((interpreter.rstacks)[interpreter.sp - 1])->dtype == "char") {
        char newChar = ((interpreter.rstacks)[interpreter.sp - 1])->getChar();
        interpreter.rstacks[fpstackVal + rstackVal + 1] = new Value(newChar);
    }
    else if (((interpreter.rstacks)[interpreter.sp - 1])->dtype == "short") {
        short newShort = ((interpreter.rstacks)[interpreter.sp - 1])->getShort();
        interpreter.rstacks[fpstackVal + rstackVal + 1] = new Value(newShort);
    }
    else if (((interpreter.rstacks)[interpreter.sp - 1])->dtype == "int") {
        int newInt = ((interpreter.rstacks)[interpreter.sp - 1])->getInt();
        interpreter.rstacks[fpstackVal + rstackVal + 1] = new Value(newInt);
    }
    else if (((interpreter.rstacks)[interpreter.sp - 1])->dtype == "float") {
        float newFloat = ((interpreter.rstacks)[interpreter.sp - 1])->getFloat();
        interpreter.rstacks[fpstackVal + rstackVal + 1] = new Value(newFloat);
    }

    interpreter.sp -= 2;

    return 1;
}
