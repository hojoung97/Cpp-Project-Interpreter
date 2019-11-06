//
// Created by yul hee cho on 31/10/2019.
//

#include "add.h"

Add::Add(){

}

Add::~Add(){

}

int Add::execute(Interpreter &interpreter) {
    if ((interpreter.rstacks[interpreter.sp - 1])->dtype == "short"){
        short val1 = interpreter.rstacks[interpreter.sp - 1]->getShort();
        short val2 = interpreter.rstacks[interpreter.sp]->getShort();
        short newShort = val1 + val2;
        interpreter.rstacks[interpreter.sp - 1] = new Value(newShort);

    } else if ((interpreter.rstacks[interpreter.sp - 1])->dtype == "int"){
        int val1 = interpreter.rstacks[interpreter.sp - 1]->getInt();
        int val2 = interpreter.rstacks[interpreter.sp]->getInt();
        int newInt = val1 + val2;
        interpreter.rstacks[interpreter.sp - 1] = new Value(newInt);

    } else if ((interpreter.rstacks[interpreter.sp - 1])->dtype == "float"){
        float val1 = interpreter.rstacks[interpreter.sp - 1]->getFloat();
        float val2 = interpreter.rstacks[interpreter.sp]->getFloat();
        float newFloat = val1 + val2;
        interpreter.rstacks[interpreter.sp - 1] = new Value(newFloat);

    } else if ((interpreter.rstacks[interpreter.sp - 1])->dtype == "char"){
        char val1 = (unsigned char)interpreter.rstacks[interpreter.sp - 1]->getChar();
        char val2 = (unsigned char)interpreter.rstacks[interpreter.sp]->getChar();
        char newChar = (+val1) + (+val2);
        interpreter.rstacks[interpreter.sp - 1] = new Value(newChar);
    }

    (interpreter.sp)--;
    return 1;
}