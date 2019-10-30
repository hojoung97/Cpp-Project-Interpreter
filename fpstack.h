#ifndef FPSTACK_H_
#define FPSTACK_H_

#include <vector>

// frame pointer stack class
class Fpstack {

public:
	Fpstack();
	Fpstack(int);
	virtual ~Fpstack();
    int val;
};



#endif /* FPSTACK_H_ */
