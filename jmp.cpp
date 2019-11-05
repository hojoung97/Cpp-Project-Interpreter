//
// Created by yul hee cho on 27/10/2019.
//

#include "jmp.h"
#include "interpreter.h"

Jmp::Jmp() {

}

Jmp::~Jmp() {

}

int Jmp::execute(Interpreter &interpreter) {

    if (((interpreter.rstacks)[interpreter.sp])->dtype == "char") {
        Interpreter::pc = (int)(((interpreter.rstacks)[interpreter.sp])->getChar());
    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "short") {
        Interpreter::pc = ((interpreter.rstacks)[interpreter.sp])->getShort();

    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "int") {
        Interpreter::pc = ((interpreter.rstacks)[interpreter.sp])->getInt();

    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "float") {
        Interpreter::pc = (int)(((interpreter.rstacks)[interpreter.sp])->getFloat());

    }

    (interpreter.sp)--;

    return 0;
}
