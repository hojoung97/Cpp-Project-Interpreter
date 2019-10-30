//
// Created by Hojoung Jang on 10/27/19.
//

#include "value.h"

Value::Value(char value) {
    *charVal = value;
    shortVal = nullptr;
    intVal = nullptr;
    floatVal = nullptr;
    dtype = "char";
}

Value::Value(short value) {
    charVal = nullptr;
    *shortVal = value;
    intVal = nullptr;
    floatVal = nullptr;
    dtype = "short";
}

Value::Value(int value) {
    charVal = nullptr;
    shortVal = nullptr;
    *intVal = value;
    floatVal = nullptr;
    dtype = "int";
}

Value::Value(float value) {
    charVal = nullptr;
    shortVal = nullptr;
    intVal = nullptr;
    *floatVal = value;
    dtype = "float";
}

Value::~Value() {

}

void Value::execute() {
    std::cout << "Error: execute() on a value object" << std::endl;
}

char Value::getChar() {
    return *charVal;
}

short Value::getShort() {
    return *shortVal;
}

int Value::getInt() {
    return *intVal;
}

float Value::getFloat() {
    return *floatVal;
}
