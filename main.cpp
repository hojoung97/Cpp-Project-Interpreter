#include "interpreter.h"

// TODO: set argc and argv
int main (){

        char infile[] = "interpreter_input.smp";

        Interpreter* interpreter = new Interpreter();
        interpreter->createMem(infile);
}
