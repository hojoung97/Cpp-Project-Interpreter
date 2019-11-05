//
// Created by yul hee cho on 27/10/2019.
//

#include "call.h"
#include "interpreter.h"

Call::Call() {

}

Call::~Call() {

}

int Call::execute(Interpreter & interpreter) {
    // Increment fpsp
    (interpreter.fpsp)++;
    // new frame pointer value
    if (((interpreter.rstacks)[interpreter.sp])->dtype == "char") {
        char rstackValue = ((interpreter.rstacks)[interpreter.sp])->getChar();
        int newFp = interpreter.sp - (int)rstackValue - 1;
        interpreter.fpstacks[interpreter.fpsp] = new Fpstack(newFp);
    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "short") {
        short rstackValue = ((interpreter.rstacks)[interpreter.sp])->getShort();
        int newFp = interpreter.sp - (int)rstackValue - 1;
        interpreter.fpstacks[interpreter.fpsp] = new Fpstack(newFp);
    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "int") {
        int rstackValue = ((interpreter.rstacks)[interpreter.sp])->getInt();
        int newFp = interpreter.sp - (int)rstackValue - 1;
        interpreter.fpstacks[interpreter.fpsp] = new Fpstack(newFp);
    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "float") {
        float rstackValue = ((interpreter.rstacks)[interpreter.sp])->getFloat();
        int newFp = interpreter.sp - (int)rstackValue - 1;
        interpreter.fpstacks[interpreter.fpsp] = new Fpstack(newFp);
    }

    //decrement sp
    (interpreter.sp)--;
    // Set pc
    Interpreter::pc = ((interpreter.rstacks)[(interpreter.sp)--])->getInt();
    return 0;
}
