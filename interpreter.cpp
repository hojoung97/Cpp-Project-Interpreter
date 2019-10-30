#include "interpreter.h"
#include "cmpe.h"
#include "cmplt.h"
#include "cmpgt.h"
#include "jmp.h"
#include "jmpc.h"
#include "call.h"
#include "ret.h"
#include "pushc.h"

#include <fstream>

int Interpreter::pc = 0;
Interpreter::Interpreter (char* filename){
    // size of memory
    size = 0;
    sp = -1;
    fpsp = -1;

    // create input file stream
    std::ifstream infile;
    char var;

    // Open the file
    infile.open(filename, std::ios::binary);
    if (!infile.is_open()) {
        return;
    }

    // read input file
    while (!infile.eof()){
        size++;
        infile.read(&var, sizeof(char));

        if ((short)var == 132) {
            memory.push_back(new Cmpe());
        } else if ((short)var == 136) {
            memory.push_back(new Cmplt());
        } else if ((short)var == 140) {
            memory.push_back(new Cmpgt());
        } else if ((short)var == 36) {
            memory.push_back(new Jmp());
        } else if ((short)var == 40) {
            memory.push_back(new Jmpc());
        } else if ((short)var == 44) {
            memory.push_back(new Call());
        } else if ((short)var == 48) {
            memory.push_back(new Ret());
        } else if ((short)var == 68) {
            memory.push_back(new Pushc());
        }

    }
    infile.close();
}

Interpreter::~Interpreter(){
}
