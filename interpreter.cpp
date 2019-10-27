#include "interpreter.h"
#include <fstream>

Interpreter::Interpreter (char* filename){
    pc = 0;

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
        infile.read(&var, sizeof(char));
        memory.push_back();
    }
    infile.close();
}

Interpreter::~Interpreter(){
}

void Interpreter::createMem(char* filename) {
	// create input file stream
	std::ifstream infile;
	int size = 0;
	char var;

	// get size of the file
	infile.open(filename, std::ios::binary);
	if (!infile.is_open()) {
	    return;
	}
	infile.seekg(0, std::ios::end);
	size = (int) infile.tellg();
	infile.seekg(0, std::ios::beg);

	// allocate appropriate size to bytecode array
	mem = new short[size];
	int i = 0;

	// read input file
	while (!infile.eof()){
		infile.read(&var, sizeof(char));
		mem[i++] = (short)var;
	}
	infile.close();
}

