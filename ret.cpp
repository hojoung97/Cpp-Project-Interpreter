//
// Created by yul hee cho on 27/10/2019.
//

#include "ret.h"
#include "interpreter.h"

Ret::Ret() {

}

Ret::~Ret() {

}

int Ret::execute(Interpreter &interpreter) {
    interpreter.sp = interpreter.fpstacks[(interpreter.fpsp)--]->val;

    if (((interpreter.rstacks)[interpreter.sp])->dtype == "char") {
        Interpreter::pc = (int)(((interpreter.rstacks)[interpreter.sp--])->getChar());
    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "short") {
        Interpreter::pc = ((interpreter.rstacks)[interpreter.sp--])->getShort();

    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "int") {
        Interpreter::pc = ((interpreter.rstacks)[interpreter.sp--])->getInt();

    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "float") {
        Interpreter::pc = (int)(((interpreter.rstacks)[interpreter.sp--])->getFloat());

    }

    return 0;
}
