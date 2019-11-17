//
// Created by Hojoung Jang on 10/30/19.
//

#include "pushvc.h"

Pushvc::Pushvc() {

}

Pushvc::~Pushvc() {

}

int Pushvc::execute(Interpreter &interpreter) {
    int fpstackVal = interpreter.fpstacks[interpreter.fpsp]->val;

    if (interpreter.rstacks[interpreter.sp]->dtype == "char"){
        char rstackVal = interpreter.rstacks[interpreter.sp]->getChar();

        if (interpreter.rstacks[fpstackVal + rstackVal + 1]->dtype == "char") {
            char charVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getChar();
            interpreter.rstacks[interpreter.sp] = new Value((char)charVal);
        }
        else if (interpreter.rstacks[fpstackVal + rstackVal + 1]->dtype == "short") {
            short shortVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getShort();
            interpreter.rstacks[interpreter.sp] = new Value((char)shortVal);
        }
        else if (interpreter.rstacks[fpstackVal + rstackVal + 1]->dtype == "int") {
            int intVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getInt();
            interpreter.rstacks[interpreter.sp] = new Value((char)intVal);
        }
        else if (interpreter.rstacks[fpstackVal + rstackVal + 1]->dtype == "float") {
            float floatVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getFloat();
            interpreter.rstacks[interpreter.sp] = new Value((char)floatVal);
        }

    } else if (interpreter.rstacks[interpreter.sp]->dtype == "short"){
        short rstackVal = interpreter.rstacks[interpreter.sp]->getShort();

        if (interpreter.rstacks[fpstackVal + rstackVal + 1]->dtype == "char") {
            char charVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getChar();
            interpreter.rstacks[interpreter.sp] = new Value((char)charVal);
        }
        else if (interpreter.rstacks[fpstackVal + rstackVal + 1]->dtype == "short") {
            short shortVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getShort();
            interpreter.rstacks[interpreter.sp] = new Value((char)shortVal);
        }
        else if (interpreter.rstacks[fpstackVal + rstackVal + 1]->dtype == "int") {
            int intVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getInt();
            interpreter.rstacks[interpreter.sp] = new Value((char)intVal);
        }
        else if (interpreter.rstacks[fpstackVal + rstackVal + 1]->dtype == "float") {
            float floatVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getFloat();
            interpreter.rstacks[interpreter.sp] = new Value((char)floatVal);
        }

    } else if (interpreter.rstacks[interpreter.sp]->dtype == "int"){
        int rstackVal = interpreter.rstacks[interpreter.sp]->getInt();
        if (interpreter.rstacks[fpstackVal + rstackVal + 1]->dtype == "char") {
            char charVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getChar();
            interpreter.rstacks[interpreter.sp] = new Value((char)charVal);
        }
        else if (interpreter.rstacks[fpstackVal + rstackVal + 1]->dtype == "short") {
            short shortVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getShort();
            interpreter.rstacks[interpreter.sp] = new Value((char)shortVal);
        }
        else if (interpreter.rstacks[fpstackVal + rstackVal + 1]->dtype == "int") {
            int intVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getInt();
            interpreter.rstacks[interpreter.sp] = new Value((char)intVal);
        }
        else if (interpreter.rstacks[fpstackVal + rstackVal + 1]->dtype == "float") {
            float floatVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getFloat();
            interpreter.rstacks[interpreter.sp] = new Value((char)floatVal);
        }

    } else if (interpreter.rstacks[interpreter.sp]->dtype == "float"){
        float rstackVal = interpreter.rstacks[interpreter.sp]->getFloat();
        if (interpreter.rstacks[fpstackVal + rstackVal + 1]->dtype == "char") {
            char charVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getChar();
            interpreter.rstacks[interpreter.sp] = new Value((char)charVal);
        }
        else if (interpreter.rstacks[fpstackVal + rstackVal + 1]->dtype == "short") {
            short shortVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getShort();
            interpreter.rstacks[interpreter.sp] = new Value((char)shortVal);
        }
        else if (interpreter.rstacks[fpstackVal + rstackVal + 1]->dtype == "int") {
            int intVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getInt();
            interpreter.rstacks[interpreter.sp] = new Value((char)intVal);
        }
        else if (interpreter.rstacks[fpstackVal + rstackVal + 1]->dtype == "float") {
            float floatVal = interpreter.rstacks[fpstackVal + rstackVal + 1]->getFloat();
            interpreter.rstacks[interpreter.sp] = new Value((char)floatVal);
        }
    }

    return 1;
}
