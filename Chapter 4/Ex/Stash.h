//: EX04:Stash.h
#ifndef STASH_H
#define STASH_H

#include <vector>

struct Stash {
	int size;		// Размер каждого элемента
	int quantity;	// Количество элементов
	int next;		// Следующий пустой элемент
	// Динамически выделяемый байтовый массив:
	std::vector<unsigned char> storage;
	// Функции!
	void initialize(int size);
	void cleanup();
	int add(const void* element);
	void* fetch(int index);
	int count();
	void inflate(int increase);
}; 
#endif // STASH_H
///:~