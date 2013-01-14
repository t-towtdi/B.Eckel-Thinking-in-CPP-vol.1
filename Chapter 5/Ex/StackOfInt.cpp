#include "StackOfInt.h"
#include <iostream>
using namespace std;

struct StackOfInt::StackImpl {
	int elements_count;
	int* intStackArray;
	int next;
};

void StackOfInt::initialize(int elements_count) {
	stackImpl = new StackImpl();
	stackImpl->intStackArray = new int[elements_count];
	stackImpl->elements_count = elements_count;
	stackImpl->next = 0;
}

void StackOfInt::push(int value) {
	if (stackImpl->next >= stackImpl->elements_count)
		cout << "Stack overflow. It can keep just " 
			 << stackImpl->elements_count << " elements" << endl;
	else
		stackImpl->intStackArray[stackImpl->next++] = value;
}

int StackOfInt::pop() {
	if (stackImpl->next == 0) {
		cout << "Stack is empty" << endl;
		return NULL;
	}
	return stackImpl->intStackArray[--stackImpl->next];
}

int StackOfInt::peek(int index) {
	if (index < 0 || index >= stackImpl->elements_count) {
		cout << "Please, select value in [0.."
			 << stackImpl->elements_count - 1 << " range" << endl;
		return NULL;
	}
	return stackImpl->intStackArray[index];
}

void StackOfInt::cleanup() {
	delete []stackImpl->intStackArray;
	delete stackImpl;
}
