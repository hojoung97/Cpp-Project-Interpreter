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
    int rstackVal = 0;
    if (((interpreter.rstacks)[interpreter.sp-1])->dtype == "char") {
        rstackVal = (int)(((interpreter.rstacks)[interpreter.sp-1])->getChar());
    }
    else if (((interpreter.rstacks)[interpreter.sp-1])->dtype == "short") {
        rstackVal = ((interpreter.rstacks)[interpreter.sp-1])->getShort();
    }
    else if (((interpreter.rstacks)[interpreter.sp-1])->dtype == "int") {
        rstackVal = ((interpreter.rstacks)[interpreter.sp-1])->getInt();
    }
    else if (((interpreter.rstacks)[interpreter.sp-1])->dtype == "float") {
        rstackVal = (int)(((interpreter.rstacks)[interpreter.sp-1])->getFloat());
    }

    if (rstackVal) {
        if (((interpreter.rstacks)[interpreter.sp])->dtype == "char") {
            Interpreter::pc = (int)(((interpreter.rstacks)[interpreter.sp])->getChar());
            //std::cout << (int)(((interpreter.rstacks)[interpreter.sp])->getChar()) << std::endl;
        }
        else if (((interpreter.rstacks)[interpreter.sp])->dtype == "short") {
            Interpreter::pc = ((interpreter.rstacks)[interpreter.sp])->getShort();
            //std::cout << (int)(((interpreter.rstacks)[interpreter.sp])->getShort()) << std::endl;
        }
        else if (((interpreter.rstacks)[interpreter.sp])->dtype == "int") {
            Interpreter::pc = ((interpreter.rstacks)[interpreter.sp])->getInt();
            //std::cout << (int)(((interpreter.rstacks)[interpreter.sp])->getInt()) << std::endl;
        }
        else if (((interpreter.rstacks)[interpreter.sp])->dtype == "float") {
            Interpreter::pc = (int)(((interpreter.rstacks)[interpreter.sp])->getFloat());
            //std::cout << (int)(((interpreter.rstacks)[interpreter.sp])->getFloat()) << std::endl;
        }
        interpreter.sp -= 2;
        return 0;
    }
    interpreter.sp -= 2;
    return 1;
}
