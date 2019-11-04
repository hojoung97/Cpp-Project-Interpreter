//
// Created by yul hee cho on 27/10/2019.
//

#include "jmpc.h"
#include "interpreter.h"

Jmpc::Jmpc() {

}

Jmpc::~Jmpc() {

}

int Jmpc::execute(Interpreter &interpreter) {
    if (interpreter.rstacks[interpreter.sp - 1]) {
        Interpreter::pc = interpreter.rstacks[interpreter.sp]->getInt();
    }
    interpreter.sp -= 2;
}
