#include "fpstack.h"

Fpstack::Fpstack() {
	fpsp = -1;
}

Fpstack::~Fpstack() {
}

int Fpstack::getFpsp() {
    return fpsp;
}

int Fpstack::getTop() {
    return stack[fpsp];
}

void Fpstack::push(int item) {
    fpsp++;
    stack.push_back(item);
}

void Fpstack::pop() {
    stack.pop_back();
    fpsp--;
}

// Add in necessary method related to frame pointer stack
