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
    int newFp = interpreter.sp - ((interpreter.rstacks)[interpreter.sp])->getInt() - 1;
    interpreter.fpstacks[interpreter.fpsp] = new Fpstack(newFp);

    //decrement sp
    (interpreter.sp)--;
    // Set pc
    Interpreter::pc = ((interpreter.rstacks)[(interpreter.sp)--])->getInt();
    return 1;
}
