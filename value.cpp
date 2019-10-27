//
// Created by Hojoung Jang on 10/27/19.
//

#include "value.h"

Value::Value(char value) {
    *charVal = value;
    shortVal = nullptr;
    intVal = nullptr;
    floatVal = nullptr;

}

Value::Value(short value) {
    charVal = nullptr;
    *shortVal = value;
    intVal = nullptr;
    floatVal = nullptr;
}

Value::Value(int value) {
    charVal = nullptr;
    shortVal = nullptr;
    *intVal = value;
    floatVal = nullptr;
}

Value::Value(float value) {
    charVal = nullptr;
    shortVal = nullptr;
    intVal = nullptr;
    *floatVal = value;
}

Value::~Value() {

}

void Value::execute() {
    std::cout << "Error: execute() on a value object" << std::endl;
}

char Value::getChar() {
    if (charVal != nullptr){
        return *charVal;
    }
    return '\0';
}

short Value::getShort() {
    if (shortVal != nullptr){
        return *shortVal;
    }
    return -1;
}

int Value::getInt() {
    if (intVal != nullptr){
        return *intVal;
    }
    return -1;
}

float Value::getFloat() {
    if (floatVal != nullptr){
        return *floatVal;
    }
    return -1;
}
