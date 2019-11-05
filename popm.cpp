//
// Created by Hojoung Jang on 10/30/19.
//

#include "popm.h"

Popm::Popm() {

}

Popm::~Popm() {

}

int Popm::execute(Interpreter &interpreter) {
    // Number of sp decrement
    if (((interpreter.rstacks)[interpreter.sp])->dtype == "char") {
        int decre = (int)(((interpreter.rstacks)[interpreter.sp])->getChar());
        decre += 1;
        interpreter.sp -= decre;
    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "short") {
        int decre = ((interpreter.rstacks)[interpreter.sp])->getShort();
        decre += 1;
        interpreter.sp -= decre;
    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "int") {
        int decre = ((interpreter.rstacks)[interpreter.sp])->getInt();
        decre += 1;
        interpreter.sp -= decre;
    }
    else if (((interpreter.rstacks)[interpreter.sp])->dtype == "float") {
        int decre = (int)(((interpreter.rstacks)[interpreter.sp])->getFloat());
        decre += 1;
        interpreter.sp -= decre;
    }

    return 1;
}
