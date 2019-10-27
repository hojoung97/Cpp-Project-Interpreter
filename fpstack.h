#ifndef FPSTACK_H_
#define FPSTACK_H_

#include <vector>

// frame pointer stack class
class Fpstack {
private:
	std::vector<int> stack;
	int fpsp;

public:
	Fpstack();
	virtual ~Fpstack();

	int getFpsp();
	int getTop();
	void push(int);
	void pop();

};



#endif /* FPSTACK_H_ */
