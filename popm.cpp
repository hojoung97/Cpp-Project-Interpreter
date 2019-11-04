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
    int decre = ((interpreter.rstacks)[interpreter.sp])->getInt() + 1;
    interpreter.sp -= decre;

    return 1;
}
