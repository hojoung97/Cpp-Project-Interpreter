#ifndef INTERPRETER_H_
#define INTERPRETER_H_

#include <vector>
#include "memory.h"
#include "runTimeStack.h"
#include "fpstack.h"

class Interpreter {
public:
    int memSize;       // size of memory
    int sp;         // stack pointer
    int fpsp;       // frame pointer stack pointer
    // Memory
    std::vector<Memory*> memory;
    // Run Time Stack
    std::vector<Value*> rstacks;
    // Frame Pointer Stack
    std::vector<Fpstack*> fpstacks;

	Interpreter(char*);
	virtual ~Interpreter();

	// Program Counter (points to memory)
    static int pc;
};


#endif /* INTERPRETER_H_ */
