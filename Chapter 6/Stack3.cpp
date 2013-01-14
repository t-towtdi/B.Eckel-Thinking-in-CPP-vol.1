//: C06:Stack3.cpp {0}
// Конструкторы и деструкторы
#include "Stack3.h"
#include "../require.h"
using namespace std;

Stack::Link::Link(void* dat, Link* nxt) {
	data = dat;
	next = nxt;
}

Stack::Link::~Link() {}

Stack::Stack() { head = 0; }

void Stack::push(void* dat) {
	head = new Link(dat, head);
}

void* Stack::peek() {
	require(head != 0, "Stack empty");
	return head->data;
}

void* Stack::pop() {
	if (head == 0) return 0;
	void* result = head->data;
	Link* oldHead = head;
	head = head->next;
	delete oldHead;
	return result;
}

Stack::~Stack() {
	require(head == 0, "Stack not empty");
} ///:!
