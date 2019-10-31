//
// Created by yul hee cho on 30/10/2019.
//

#include "pushvi.h"

Pushvi::Pushvi() {

}

Pushvi::~Pushvi() {

}

void Pushvi::execute(Interpreter &interpreter) {
    int fpstackVal = interpreter.fpstacks[interpreter.fpsp]->val;
    int rstackVal = interpreter.rstacks[interpreter.sp]->getInt();
    int intVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getInt();
    interpreter.rstacks[interpreter.sp] = new Value(intVal);
}
