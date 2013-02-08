//: C09:Stash4.cpp {0}
#include "Stash4.h"
#include <iostream>
#include <cassert>

using namespace std;
const int increment = 100;
int Stash::add(void* element) {
	if (next >= quantity)	// В буфере есть свободдное место
		inflate(increment);
	// Скопировать элемент в следующую свободную позиция буфера:
	int startBytes = next * size;
	unsigned char* e = (unsigned char*)element;
	for (int i = 0; i < size; i++)
		storage[startBytes + i] = e[i];
	next++;
	return(next - 1);	// Индекс
}

void Stash::inflate(int increase) {
	assert(increase >= 0);
	if (increase == 0) return;
	int newQuantity = quantity + increase;
	int newBytes = newQuantity * size;
	int oldBytes = quantity * size;
	unsigned char* b = new unsigned char[newBytes];
	for (int i = 0; i < oldBytes; i++)
		b[i] = storage[i];	// Копирование старого буфера в новый
	delete [](storage);		// Освобождение старого буфера
	storage = b;			// Перевод указателя на новый буфер
	quantity = newQuantity;	// Изменение размера
} ///:~
