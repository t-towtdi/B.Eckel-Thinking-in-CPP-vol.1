//: C04:Stack.cpp {0}
// Связанный список с вложением
#include "Stack2.h"
#include "../../require.h"
using namespace std;

void
Stack::Link::initialize(void* dat, Link* nxt) {
	data = dat;
	next = nxt;
}

void Stack::initialize() { head = 0; }

void Stack::push(void* dat) {
	Link* newLink = new Link;
	newLink->initialize(dat, head);
	head = newLink;
}

void* Stack::peek() {
	require(head != 0, "Stack empty");
	return head->data;
}

void* Stack::pop() {
	if(head == 0) return 0;
	void* result = head->data;
	Link* oldHead = head;
	head = head->next;
	delete oldHead;
	return result;
}

void Stack::cleanup() {
	require(head == 0, "Stack not empty");
} ///:~
