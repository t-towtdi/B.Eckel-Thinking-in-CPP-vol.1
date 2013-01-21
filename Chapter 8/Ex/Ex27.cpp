//: EX08:Ex27.cpp
// Создайте класс с изменчивой (volatile) переменной. Попробуйте обратиться к 
// этой переменной из функций, объявленных с модификатором volatile и без него,
// и посмотрите, как на это отреагирует компилятор. Создайте изменчивые и неизменчивые
// объекты класса, попробуйте вызывать для них обе разновидности функций. Посмотрите,
// какие вызвоы будут выполнены успешно и какие сообщени об ошибках выдаст компилятор
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

typedef unsigned char byte;

class V {
	enum { buf_size = 100 };
	volatile byte v_var[buf_size];
public:
	void set_message(const byte* message, int count) volatile;
	volatile byte* get_message();
};

void V::set_message(const byte* message, int count) volatile {
	if (count > buf_size) return;
	memcpy((void*)v_var, message, count);
}

volatile byte* V::get_message() {
	return v_var;
}

int main() {
	volatile V v;
	V v2;
	const char* mess = "Some message";
	cout << strlen(mess) << endl;
	v.set_message((byte*)mess, strlen(mess));
// 	Ex27.cpp:36: error: passing `volatile V' as `this' argument of 
//	`volatile byte* V::get_message()' discards qualifiers
//!	cout << (char*)v.get_message() << endl;
	v2 = v;
} ///:~
