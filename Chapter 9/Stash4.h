//: C09Stash4.h
// Подставляемые функции
#ifndef STASH4_H
#define STASH4_H
#include "../require.h"

class Stash {
	int size;		// Размер каждого элемента
	int quantity;	// Количество элементов
	int next;		// Следующий пустой элемент
	// Динамически выделяемый байтовый массив:
	unsigned char* storage;
	void inflate(int increase);
public:
	Stash(int sz) : size(sz), quantity(0), 
		next(0), storage(0) {}
	Stash(int sz, int initQuantity) : size(sz),
		quantity(0), next(0), storage(0) {
			inflate(initQuantity);
	}
	Stash::~Stash() {
		if (storage != 0)
			delete []storage;
	}
	int add(void* element);
	void* fetch(int index) const {
		require(0 <= index, "Stash::fetch (-)index");
		if (index >= next)
			return 0;	// Признак конца
		// Указатель на запрашиваемый эелемент:
		return &(storage[index * size]);
	}
	int count() const { return next; }
};

#endif // STASH4_H ///:~
