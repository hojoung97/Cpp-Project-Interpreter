#include "interpreter.h"
#include "bytecode.h"

// TODO: set argc and argv
int main (int argc, char** argv) {

    std::string infile = argv[1];

    Interpreter interpreter(infile);
    for (int i = 0; i < Interpreter::memSize; i++) {
        interpreter.rstacks.push_back(nullptr);
        interpreter.fpstacks.push_back(nullptr);
    }
    //interpreter.rstacks.reserve(Interpreter::memSize);
    //interpreter.fpstacks.reserve(Interpreter::memSize);

    int size = Interpreter::memSize;
    //std::cout << "starting pc: " << Interpreter::pc << std::endl;
    while (Interpreter::pc < size){
        //std::cout << "current pc: " << Interpreter::pc << std::endl;
        int incre = dynamic_cast<Bytecode*>((interpreter.memory)[Interpreter::pc])->execute(interpreter);
        Interpreter::pc += incre;
        if (incre == -1){
            break;
        }
    }
}
