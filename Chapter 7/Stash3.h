//: C07:Stash3.h
// Перегрузка функций
#ifndef STASH3_H
#define STASH3_H

class Stash {
	int size;		// Размер каждого элемента
	int quantity;	// Количество элементов
	int next;		// Следующий пустой элемент
	// Динамически выделяемый байтовый массив:
	unsigned char* storage;
	void inflate(int increase);
public:
	Stash(int size);	// Нулевое количество элементов
	Stash(int size, int initQuantity);
	~Stash();
	int add(void* element);
	void* fetch(int index);
	int count();
};

#endif	// STASH3_H ///:~
