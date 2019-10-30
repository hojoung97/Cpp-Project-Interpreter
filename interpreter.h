#ifndef INTERPRETER_H_
#define INTERPRETER_H_

#include <vector>
#include "memory.h"
#include "runTimeStack.h"
#include "fpstack.h"

class Interpreter {
private:
    // Memory
    std::vector<Memory*> memory;
    int size;

    // Run Time Stack
    std::vector<RunTimeStack*> rstacks;
    int sp;

    // Frame Pointer Stack
    std::vector<Fpstack*> fpstacks;
    int fpsp;

public:
	Interpreter(char*);
	virtual ~Interpreter();



	// Program Counter (points to memory)
    static int pc;
};


#endif /* INTERPRETER_H_ */
