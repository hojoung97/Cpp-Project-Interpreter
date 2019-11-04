#include "interpreter.h"
#include "bytecode.h"

// TODO: set argc and argv
int main (){

    char infile[] = "interpreter_input.smp";

    Interpreter interpreter(infile);
    interpreter.rstacks.reserve(Interpreter::memSize);
    interpreter.fpstacks.reserve(Interpreter::memSize);

    int size = Interpreter::memSize;

    while (Interpreter::pc < size){
        int incre = dynamic_cast<Bytecode*>((interpreter.memory)[Interpreter::pc])->execute(interpreter);
        Interpreter::pc += incre;
        if (incre == -1){
            break;
        }
    }
}
