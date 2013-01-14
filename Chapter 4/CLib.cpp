//: C04:CLib.cpp {0}
// Реализация библиотеки в стиле С
// Объявление структуры и функций:
#include "CLib.h"
#include <iostream>
#include <cassert>
using namespace std;
// Количество элементов, добавляемых при увеличении размера буфера:
const int increment = 100;

void initialize(CStash* s, int sz) {
	s->size = sz;
	s->quantity = 0;
	s->storage = 0;
	s->next = 0;
}

int add(CStash* s, const void* element) {
	if (s->next >= s->quantity)	// В буфере есть свободное место?
		inflate(s, increment);
	// Скопировать элемент в следующую свободную позицию буфера:
	int startBytes = s->next * s->size;
	unsigned char* e = (unsigned char*)element;
	for (int i = 0; i < s->size; i++)
		s->storage[startBytes + i] = e[i];
	s->next++;
	return(s->next - 1);	// Индекс
}

void* fetch(CStash* s, int index) {
	// Проверка индекса:
	assert(0 <= index);
	if (index >= s->next)
		return 0;	// Признак конца
	// Указатель на запрашиваемый элемент:
	return &(s->storage[index * s->size]);
}

int count(CStash* s) {
	return s->next;	// Количество элементов в CStash
}

void inflate(CStash* s, int increase) {
	assert(increase >0);
	int newQuantity = s->quantity + increase;
	int newBytes = newQuantity * s->size;
	int oldBytes = s->quantity * s->size;
	unsigned char* b = new unsigned char[newBytes];
	for (int i = 0; i < oldBytes; i++)
		b[i] = s->storage[i];	// Копирование старого буфера в новый
	delete [](s->storage);		// Освобождение старого буфера
	s->storage = b;		// Перевод указателя на новый буфер
	s->quantity = newQuantity;
}

void cleanup(CStash* s) {
	if (s->storage != 0) {
		cout << "freeing storage" << endl;
		delete []s->storage;
	}
} ///:~