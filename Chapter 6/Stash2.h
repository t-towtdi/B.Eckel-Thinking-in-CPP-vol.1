//: C06:Stash2.h
// Версия с конструктором и деструктором
#ifndef STASH2_H
#define STASH2_H

class Stash {
	int size;		// Размер каждого элемента
	int quantity;	// Количество элементов
	int next;		// Следующий элемент
	// Динамически выделяемый байтовый массив:
	unsigned char* storage;
	void inflate(int increase);
public:
	Stash(int size);
	~Stash();
	int add(void* element);
	void* fetch(int index);
	int count();
};
#endif // STASH2_H ///:~
