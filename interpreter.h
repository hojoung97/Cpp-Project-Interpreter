#ifndef INTERPRETER_H_
#define INTERPRETER_H_

#include <vector>
#include "memory.h"

class Interpreter {
private:
    std::vector<Memory*> memory;

public:
	Interpreter(char*);
	virtual ~Interpreter();
	void createMem(char*);

    static int pc;
};


#endif /* INTERPRETER_H_ */
