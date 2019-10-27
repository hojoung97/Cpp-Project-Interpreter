#ifndef INTERPRETER_H_
#define INTERPRETER_H_

class Interpreter {
private:
	short* mem;
	int pc;

public:
	Interpreter();
	virtual ~Interpreter();
	void createMem(char*);
};



#endif /* INTERPRETER_H_ */
