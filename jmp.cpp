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
    Interpreter::pc = ((interpreter.rstacks)[interpreter.sp])->getInt();
    (interpreter.sp)--;
}
