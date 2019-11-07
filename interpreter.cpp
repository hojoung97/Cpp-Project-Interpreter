#include "interpreter.h"
#include "cmpe.h"
#include "cmplt.h"
#include "cmpgt.h"
#include "jmp.h"
#include "jmpc.h"
#include "call.h"
#include "ret.h"
#include "pushc.h"
#include "pushvc.h"
#include "pushvs.h"
#include "pushvi.h"
#include "pushvf.h"
#include "popm.h"
#include "popa.h"
#include "popv.h"
#include "pushs.h"
#include "pushi.h"
#include "pushf.h"
#include "peekc.h"
#include "peeks.h"
#include "peeki.h"
#include "peekf.h"
#include "pokec.h"
#include "pokes.h"
#include "pokei.h"
#include "pokef.h"
#include "swp.h"
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"
#include "printc.h"
#include "prints.h"
#include "printi.h"
#include "printf.h"
#include "halt.h"

#include <fstream>
#include <map>

int Interpreter::pc = 0;
int Interpreter::memSize = 0;
Interpreter::Interpreter (std::string filename){
    // size of memory
    sp = -1;
    fpsp = -1;

    // create input file stream
    std::ifstream infile;
    char var;

    // Open the file
    infile.open(filename.c_str(), std::ios::binary);
    if (!infile.is_open()) {
        return;
    }

    //std::cout << "starting memSize: " << Interpreter::memSize << std::endl;

    // read input file
    while (!infile.eof()){
        //std::cout << "memsize: " << Interpreter::memSize << std::endl;
        Interpreter::memSize++;
        infile.read(&var, sizeof(char));

        //std::cout << "memSize: " << Interpreter::memSize << std::endl;
        //std::cout << "byte: " << +(unsigned char)var << std::endl;

        if (+(unsigned char)var == 132) {
            memory.push_back(new Cmpe());
        } else if (+(unsigned char)var == 136) {
            memory.push_back(new Cmplt());
        } else if (+(unsigned char)var == 140) {
            memory.push_back(new Cmpgt());
        } else if (+(unsigned char)var == 36) {
            memory.push_back(new Jmp());
        } else if (+(unsigned char)var == 40) {
            memory.push_back(new Jmpc());
        } else if (+(unsigned char)var == 44) {
            memory.push_back(new Call());
        } else if (+(unsigned char)var == 48) {
            memory.push_back(new Ret());
        } else if (+(unsigned char)var == 68) {
            memory.push_back(new Pushc());
            infile.read(&var, sizeof(char));
            //std::cout << +var << std::endl;
            memory.push_back(new Value(var));
            Interpreter::memSize++;
        } else if (+(unsigned char)var == 69) {
            memory.push_back(new Pushs());
            for (int i = 0; i < 2; i++) {
                infile.read(&var, sizeof(char));
                memory.push_back(new Value(var));
                Interpreter::memSize++;
            }
        } else if (+(unsigned char)var == 70) {
            memory.push_back(new Pushi());
            for (int i = 0; i < 4; i++) {
                infile.read(&var, sizeof(char));
                memory.push_back(new Value(var));
                Interpreter::memSize++;
            }
        } else if (+(unsigned char)var == 71) {
            memory.push_back(new Pushf());
            for (int i = 0; i < 4; i++) {
                infile.read(&var, sizeof(char));
                memory.push_back(new Value(var));
                Interpreter::memSize++;
            }
        } else if (+(unsigned char)var == 72) {
            memory.push_back(new Pushvc());
        } else if (+(unsigned char)var == 73) {
            memory.push_back(new Pushvs());
        } else if (+(unsigned char)var == 74) {
            memory.push_back(new Pushvi());
        } else if (+(unsigned char)var == 75) {
            memory.push_back(new Pushvf());
        } else if (+(unsigned char)var == 76) {
            memory.push_back(new Popm());
        } else if (+(unsigned char)var == 77) {
            memory.push_back(new Popa()); //Not finished
        } else if (+(unsigned char)var == 80) {
            memory.push_back(new Popv());
        } else if (+(unsigned char)var == 84) {
            memory.push_back(new Peekc());
        } else if (+(unsigned char)var == 85) {
            memory.push_back(new Peeks());
        } else if (+(unsigned char)var == 86) {
            memory.push_back(new Peeki());
        } else if (+(unsigned char)var == 87) {
            memory.push_back(new Peekf());
        } else if (+(unsigned char)var == 88) {
            memory.push_back(new Pokec());
        } else if (+(unsigned char)var == 89) {
            memory.push_back(new Pokes());
        } else if (+(unsigned char)var == 90) {
            memory.push_back(new Pokei());
        } else if (+(unsigned char)var == 91) {
            memory.push_back(new Pokef());
        } else if (+(unsigned char)var == 94) {
            memory.push_back(new Swp());
        } else if (+(unsigned char)var == 100) {
            memory.push_back(new Add());
        } else if (+(unsigned char)var == 104) {
            memory.push_back(new Sub());
        } else if (+(unsigned char)var == 108) {
            memory.push_back(new Mul());
        } else if (+(unsigned char)var == 112) {
            memory.push_back(new Div());
        } else if (+(unsigned char)var == 144) {
            memory.push_back(new Printc());
        } else if (+(unsigned char)var == 145) {
            memory.push_back(new Prints());
        } else if (+(unsigned char)var == 146) {
            memory.push_back(new Printi());
        } else if (+(unsigned char)var == 147) {
            memory.push_back(new Printf());
        } else if (+(unsigned char)var == 0) {
            memory.push_back(new Halt()); //Not finished
        }
    }
    infile.close();
}

Interpreter::~Interpreter(){
    for (int i = 0; i < Interpreter::memSize; i++) {
        delete(memory[i]);
        delete(rstacks[i]);
        delete(fpstacks[i]);
    }
}

