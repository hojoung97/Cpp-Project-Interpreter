//
// Created by yul hee cho on 02/11/2019.
//

#include "printi.h"
#include <iostream>
using namespace std;

Printi::Printi(){

}

Printi::~Printi(){

}

int Printi::execute(Interpreter &interpreter) {
    int display = interpreter.rstacks[interpreter.sp--]->getInt();

    std::cout << display << std::endl;

    return 1;
}