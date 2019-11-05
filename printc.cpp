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

int Printc::execute(Interpreter &interpreter) {
    char display = interpreter.rstacks[interpreter.sp--]->getChar();

    std::cout << display << std::endl;

    return 1;
}