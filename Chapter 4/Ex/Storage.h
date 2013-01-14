//: EX04:Storage.h

#ifndef STORAGE_H
#define STORAGE_H

#include "../CppLib.h"
#include "../Stack.h"

struct Storage {
	Stack stack;
	Stash* stash;
	int stash_size;
	int stash_index;
	int ELEMENTS_IN_STASH;
	int current_element_in_stash;
	
	void initialize(int size);
	void push(const void* element);
	void* pop();
	void cleanup();
};

#endif // STORAGE_H
