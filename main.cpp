#include "interpreter.h"
#include "bytecode.h"

// TODO: set argc and argv
int main (){

    char infile[] = "interpreter_input.smp";

    Interpreter interpreter(infile);

    int size = interpreter.memSize;
    int i = 0;
    while (i < size){
        int incre = static_cast<Bytecode*>((interpreter.memory)[i])->execute(interpreter);
        i += incre;
    }
}
