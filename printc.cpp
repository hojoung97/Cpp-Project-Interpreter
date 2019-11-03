//
// Created by yul hee cho on 02/11/2019.
//

#include "printc.h"
#include <iostream>
using namespace std;

Printc::Printc(){

}

Printc::~Printc(){

}

void Printc::execute(Interpreter &interpreter) {
    char display = interpreter.rstacks[interpreter.sp--]->getChar();

    printf("%c\n", display);
}