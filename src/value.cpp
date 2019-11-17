//
// Created by Hojoung Jang on 10/27/19.
//

#include "value.h"

Value::Value(char value) {
    charVal = value;
    dtype = "char";
    shortVal = 0;
    intVal = 0;
    floatVal = 0.f;
}

Value::Value(short value) {
    shortVal = value;
    dtype = "short";
    charVal = '\0';
    intVal = 0;
    floatVal = 0.f;
}

Value::Value(int value) {
    intVal = value;
    dtype = "int";
    charVal = '\0';
    shortVal = 0;
    floatVal = 0.f;
}

Value::Value(float value) {
    floatVal = value;
    dtype = "float";
    charVal = '\0';
    shortVal = 0;
    intVal = 0;
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
