#ifndef STACKOFINT_H
#define STACKOFINT_H

class StackOfInt {
	struct StackImpl;
	StackImpl* stackImpl;
public:
	void initialize(int size);
	void push(int);
	int peek(int index);
	int pop();
	void cleanup();
};

#endif // STACKOFINT_H
