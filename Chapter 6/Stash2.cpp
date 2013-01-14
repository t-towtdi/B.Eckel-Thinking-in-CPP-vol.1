//: C06:Stash2.cpp {0}
// Конструктор и деструктор
#include "Stash2.h"
#include "../require.h"
#include <iostream>
#include <cassert>
using namespace std;
const int increment = 100;

Stash::Stash(int sz) {
	size = sz;
	quantity = 0;
	storage = 0;
	next = 0;
}

int Stash::add(void* element) {
	if (next >= quantity) // В буфере есть свободное место?
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
	require(0 <= index, "Stash::fetch (-)index");
	if (index >= next)
		return 0;	// Признак конца
	// Указатель на запрашиваемый элемент:
	return &(storage[index * size]);
}

int Stash::count() {
	return next;	// Количество элементов в Stash
}

void Stash::inflate(int increase) {
	require(increase > 0, "Stash::inflate zero or negative increase");
	int newQuantity = quantity + increase;
	int newBytes = newQuantity * size;
	int oldBytes = quantity * size;
	unsigned char* b = new unsigned char[newBytes];
	for (int i = 0; i < oldBytes; i++)
		b[i] = storage[i];	// Копирование старого буфера в новый
	delete [](storage);	// Освобождение старого буфера
	storage = b;			// Перевод указателя на новый буфер
	quantity = newQuantity;
}

Stash::~Stash() {
	if (storage != 0) {
		cout << "freeing storage" << endl;
		delete []storage;
	}
} ///:~
