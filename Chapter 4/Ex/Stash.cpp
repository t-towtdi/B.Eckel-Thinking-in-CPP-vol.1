//: EX04:Stash.cpp {0}
#include "Stash.h"
#include <iostream>
#include <cassert>
using namespace std;
// Количество элементов, добавляемых при увеличении размера буфера:
const int increment = 100;

void Stash::initialize(int sz) {
	size = sz;
	quantity = 0;
	next = 0;
}

int Stash::add(const void* element) {
	if (next >= quantity)	// В буфере есть свободное место?
		inflate(increment);
	// Скопировать элемент в следующую свободную позицию буфера:
	int startBytes = next * size;
	unsigned char* e = (unsigned char*)element;
	for (int i = 0; i < size; i++)
		storage[startBytes + i] = e[i];
	next++;
	return (next - 1);	// Индекс
}

void* Stash::fetch(int index) {
	// Проверка индекса
	assert(0 <= index);
	if (index >= next)
		return 0;	// Признак конца
	// Указатель на запрашиваемый эелемент:
	return &(storage[index * size]);
}

int Stash::count() {
	return next;	// Количество элементов в Stash
}

void Stash::inflate(int increase) {
	assert(increase > 0);
	int newQuantity = quantity + increase;
	int newBytes = newQuantity * size;
	int oldBytes = quantity * size;
	std::vector<unsigned char> b(newBytes);
	for (int i = 0; i < oldBytes; i++)
		b[i] = storage[i];	// Копирование старого буфера в новый
	//delete []storage;		// Освобождение старого буфера
	storage = b;	// Перевод указателя на новый буфер
	quantity = newQuantity;
}

void Stash::cleanup() {
	cout << "freeing storage" << endl;
} ///:~
