#ifndef FPSTACK_H_
#define FPSTACK_H_

#include <vector>

// frame pointer stack class
class Fpstack {
private:
	std::vector<int> stack;

public:
	Fpstack();
	virtual ~Fpstack();

};



#endif /* FPSTACK_H_ */
