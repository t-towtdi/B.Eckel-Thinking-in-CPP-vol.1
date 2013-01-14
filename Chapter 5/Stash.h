//: C05:Stash.h
// Версия Stash c ограничением доступа
#ifndef STASH_H
#define STASH_H

class Stash {
	int size;		// Размер каждого элемента
	int quantity;	// Количество элементов
	int next;		// Следующий пустой элемент
	// Динамически выделяемый байтовый массив:
	unsigned char* storage;
	void inflate(int increase);
public:
	void initialize(int size);
	void cleanup();
	int add(const void* element);
	void* fetch(int index);
	int count();
};
#endif	// STASH_H ///:~
