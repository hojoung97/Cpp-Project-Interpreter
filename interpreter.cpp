#include "interpreter.h"
#include <fstream>

Interpreter::Interpreter (){
	mem = nullptr;
	pc =0;
}

Interpreter::~Interpreter(){
    delete[] mem;
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

