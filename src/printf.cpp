//
// Created by yul hee cho on 02/11/2019.
//

#include "printf.h"
#include <iostream>
using namespace std;

Printf::Printf(){

}

Printf::~Printf(){

}

int Printf::execute(Interpreter &interpreter) {
    float display = interpreter.rstacks[interpreter.sp--]->getFloat();

    std::cout << display << std::endl;

    return 1;
}