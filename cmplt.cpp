//
// Created by yul hee cho on 27/10/2019.
//

#include "cmplt.h"

void Cmplt::execute(Fpstack *fpStack, RunTimeStack *rStack){
    rStack[rStack->sp - 1] = rStack[rStack->sp - 1] < rStack[rStack->sp];
    rStack->sp--;
}

Cmplt::Cmplt() {

}

Cmplt::~Cmplt() {

}

void Cmplt::execute(Interpreter &interpreter) {
    Value* top1 = interpreter.rstacks[interpreter.sp - 1];
    Value* top2 = interpreter.rstacks[interpreter.sp];

    if (!(top1->dtype.compare("char"))) {
        char top1Val = top1->getChar();
        char top2Val = top2->getChar();
        if (top1Val < top2Val){
            interpreter.rstacks[interpreter.sp - 1] = new Value(1);
        } else {
            interpreter.rstacks[interpreter.sp - 1] = new Value(0);
        }
    } else if (!(top1->dtype.compare("short"))) {
        short top1Val = top1->getShort();
        short top2Val = top2->getShort();
        if (top1Val < top2Val){
            interpreter.rstacks[interpreter.sp - 1] = new Value(1);
        } else {
            interpreter.rstacks[interpreter.sp - 1] = new Value(0);
        }
    } else if (!(top1->dtype.compare("int"))) {
        int top1Val = top1->getInt();
        int top2Val = top2->getInt();
        if (top1Val < top2Val){
            interpreter.rstacks[interpreter.sp - 1] = new Value(1);
        } else {
            interpreter.rstacks[interpreter.sp - 1] = new Value(0);
        }
    } else if (!(top1->dtype.compare("float"))) {
        float top1Val = top1->getFloat();
        float top2Val = top2->getFloat();
        if (top1Val < top2Val){
            interpreter.rstacks[interpreter.sp - 1] = new Value(1);
        } else {
            interpreter.rstacks[interpreter.sp - 1] = new Value(0);
        }
    } else {
    }

    (interpreter.sp)--;
}
