//
// Created by yul hee cho on 31/10/2019.
//

#include "add.h"

Add::Add(){

}

Add::~Add(){

}

int Add::execute(Interpreter &interpreter) {
    if (!((interpreter.rstacks[interpreter.sp - 1])->dtype.compare("short"))){
        short val1 = interpreter.rstacks[interpreter.sp - 1]->getShort();
        short val2 = interpreter.rstacks[interpreter.sp]->getShort();

        interpreter.rstacks[interpreter.sp - 1] = new Value(val1 + val2);
    } else if (!((interpreter.rstacks[interpreter.sp - 1])->dtype.compare("int"))){
        int val1 = interpreter.rstacks[interpreter.sp - 1]->getInt();
        int val2 = interpreter.rstacks[interpreter.sp]->getInt();

        interpreter.rstacks[interpreter.sp - 1] = new Value(val1 + val2);
    } else if (!((interpreter.rstacks[interpreter.sp - 1])->dtype.compare("float"))){
        float val1 = interpreter.rstacks[interpreter.sp - 1]->getFloat();
        float val2 = interpreter.rstacks[interpreter.sp]->getFloat();

        interpreter.rstacks[interpreter.sp - 1] = new Value(val1 + val2);
    } else if (!((interpreter.rstacks[interpreter.sp - 1])->dtype.compare("char"))){
        char val1 = interpreter.rstacks[interpreter.sp - 1]->getChar();
        char val2 = interpreter.rstacks[interpreter.sp]->getChar();

        interpreter.rstacks[interpreter.sp - 1] = new Value(val1 + val2);
    }

    (interpreter.sp)--;
    return 1;
}