#ifndef INTERPRETER_H_
#define INTERPRETER_H_

#include <vector>
#include "memory.h"
#include "runTimeStack.h"
#include "fpstack.h"
#include "value.h"

class Interpreter {
public:
    int sp;         // stack pointer
    int fpsp;       // frame pointer stack pointer
    // Memory
    std::vector<Memory*> memory;
    // Run Time Stack
    std::vector<Value*> rstacks;
    // Frame Pointer Stack
    std::vector<Fpstack*> fpstacks;

	Interpreter(std::string);
	virtual ~Interpreter();

	// Program Counter (points to memory)
    static int pc;
    // memoey size
    static int memSize;
};


#endif /* INTERPRETER_H_ */
