//: C05:Stack.h
// Вложенные структуры в связанном списке
#ifndef STACK2_H
#define STACK2_H

class Stack {
	struct Link {
		void* data;
		Link* next;
		viod initialize(void* dat, Link* nxt);
	}* head;
public:
	void initialize();
	void push(void* dat);
	void* peek();
	void* pop();
	void cleanup();
};
#endif	// STACK2_H ///:~
