//
// Created by Hojoung Jang on 10/27/19.
//

#include "value.h"

Value::Value(char value) {
    charVal = value;
    dtype = "char";
}

Value::Value(short value) {
    shortVal = value;
    dtype = "short";
}

Value::Value(int value) {
    intVal = value;
    dtype = "int";
}

Value::Value(float value) {
    floatVal = value;
    dtype = "float";
}

Value::~Value() {

}

void Value::execute() {
    std::cout << "Error: execute() on a value object" << std::endl;
}

char Value::getChar() {
    return charVal;
}

short Value::getShort() {
    return shortVal;
}

int Value::getInt() {
    return intVal;
}

float Value::getFloat() {
    return floatVal;
}
