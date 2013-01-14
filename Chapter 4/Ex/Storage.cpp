#include <iostream>
#include "Storage.h"
using namespace std;

void Storage::initialize(int size) {
	stack.initialize();
	ELEMENTS_IN_STASH = 5;
	current_element_in_stash = 0;
	stash_size = size;
	stash = new Stash;
	stash->initialize(stash_size);
}

void Storage::push(const void* element) {
	if (current_element_in_stash == ELEMENTS_IN_STASH) {
		stack.push(stash);
		stash = new Stash;
		stash->initialize(stash_size);
		current_element_in_stash = 0;
	}
	
	current_element_in_stash++;
	stash->add(element);
}

void* Storage::pop() {
	if (current_element_in_stash == 0) {
		stash->cleanup();
		if ((stash = (Stash*)stack.pop()) == 0)
			return 0;
		else
			current_element_in_stash = stash->count();
	}
	
	return  stash->fetch(--current_element_in_stash);
}

void Storage::cleanup() {
	stack.cleanup();
}
