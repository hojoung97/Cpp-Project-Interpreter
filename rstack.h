#ifndef RSTACK_H_
#define RSTACK_H_

#include <vector>


// Run time Stack class
class Rstack {
private:
	std::vector<void*> stack;
	int sp;

public:
	Rstack();
	virtual ~Rstack();
};



#endif /* RSTACK_H_ */
