//: EX07:StashMem.cpp
#include "StashMem.h"
#include "../../require.h"
#include <iostream>
#include <cassert>
using namespace std;
const int increment = 100;

Stash::Stash(int sz, int initQuantity) {
	size = sz;
	quantity = 0;
	next = 0;
	storage = new Mem(initQuantity);
	inflate(initQuantity);
}

Stash::~Stash() {
	if (storage != 0) {
		cout << "freeing storage" << endl;
		delete storage;
	}
}

int Stash::add(void* element) {
	if (next >= quantity)	// В буфере есть свободное место?
		inflate(increment);
	// Скопировать элемент в следующую свободную позицию буфера:
	int startBytes = next * size;
	memcpy(storage->pointer() + startBytes, element, size);
	next++;
	return (next - 1);	// Индекс
}

void* Stash::fetch(int index) {
	require(0 <= index, "Stash::fetch (-)index");
	if (index >= next)
		return 0;	// Признак конца
	// Указатель на запрашиваемый элемент:
	return &(storage->pointer() + index * size);
}

int Stash::count() {
	return next;	// Количество элементов в CStash
}

void Stash::inflate(int increase) {
	assert(increase >=0);
	if (increase == 0) return;
	int newQuantity = quantity + increase;
	int newBytes = newQuantity * size;
	int oldBytes = quantity * size;
	Mem* new_storage = new Mem(newBytes);
	memcpy(new_storage->pointer(), storage->pointer(), oldBytes);
	delete storage;		// Освобождение старого буфера
	storage = new_storage;			// Перевод указателя на новый буфер
	quantity = newQuantity;	// Изменение размера
} ///:~
