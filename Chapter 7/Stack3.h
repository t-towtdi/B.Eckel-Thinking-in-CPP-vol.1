//: C06:Stack3.h
// —тек с конструктором и деструктором
#ifndef STACK3_H
#define STACK3_H

class Stack {
	struct Link {
		void* data;
		Link* next;
		Link(void* dat, Link* nxt);
		~Link();
	}* head;
public:
	Stack();
	Stack(void** object_pointers, int objects_count);
	~Stack();
	void push(void* dat);
	void* peek();
	void* pop();
};

#endif // STACK3_H ///:~
