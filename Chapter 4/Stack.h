//: C04:Stack.h
// Вложенная структура в связанном списке
#ifndef STACK_H
#define STACK_H

struct Stack {
	struct Link {
		void* data;
		Link* next;
		void initialize(void* dat, Link* nxt);
	}* head;
	void initialize();
	void push(void* dat);
	void* peek();
	void* pop();
	void cleanup();
};
#endif // STACK_H ///:~