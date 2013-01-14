#include "StackOfInt.h"
#include <iostream>
#include <vector>
using namespace std;

struct StackOfInt::StackImpl {
	vector<int> intStackArray;
};

void StackOfInt::initialize(int elements_count) {
	stackImpl = new StackImpl();
}

void StackOfInt::push(int value) {
	stackImpl->intStackArray.push_back(value);
}

int StackOfInt::pop() {
	int return_value = stackImpl->intStackArray[stackImpl->intStackArray.size()-1];
	stackImpl->intStackArray.pop_back();
	return return_value;
}

int StackOfInt::peek(int index) {
	return stackImpl->intStackArray[index];
}

void StackOfInt::cleanup() {
	delete stackImpl;
}
