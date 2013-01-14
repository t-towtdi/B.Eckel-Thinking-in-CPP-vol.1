//: EX07:StashMem.h
#ifndef STASH3_H
#define STASH3_H

#include "Mem2.h"

class Stash {
	int size;		// Размер каждого элемента
	int quantity;	// Количество элементов
	int next;		// Следующий пустой элемент
	Mem* storage;
	void inflate(int increase);
public:
	Stash(int size, int initQuantity = 0);
	~Stash();
	int add(void* element);
	void* fetch(int index);
	int count();
};

#endif	// STASH3_H ///:~
