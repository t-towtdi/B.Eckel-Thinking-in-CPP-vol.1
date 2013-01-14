//: EX07:Ex11.cpp
// Включите в класс Mem функцию bool moved(), которая получает результат
// вызова pionter() и сообщает, был ли перемещен указатель (вследствие
// перераспределения памяти). Напишите функцию main() для тестирования функции
// moved(). Что разумнее, использовать функции типа moved() или просто
// вызывать pointer() каждый раз, когда потребуется обратиться к памяти в Mem?
#include "Mem2.h"
#include <cstring>
#include <iostream>
using namespace std;

class MyString {
	Mem* buf;
public:
	MyString();
	MyString(char* str);
	~MyString();
	void concat(char* str);
	void print(ostream& os);
};

MyString::MyString() { buf = 0; }

MyString::MyString(char* str) {
	buf = new Mem(strlen(str) + 1);
	strcpy((char*)buf->pointer(), str);
}

void MyString::concat(char* str) {
	if(!buf) buf = new Mem(100);
	strcat((char*)buf->pointer(
		buf->msize() + strlen(str) + 1), str);
}

void MyString::print(ostream& os) {
	if (!buf) return;
	os << buf->pointer() << endl;
	os << buf->moved() << endl;
}

MyString::~MyString() { delete buf; }

int main() {
	MyString s("My test string");
	s.print(cout);
	s.concat(" some additional stuff");
	s.print(cout);
	MyString s2;
	s2.concat("Using default constructor");
	s2.print(cout);
} ///:~
