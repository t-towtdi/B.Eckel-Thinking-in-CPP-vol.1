//: EX03:Ex34.cpp
// Измените программу FuncitonTable.cpp так, чтобы функции вместо вывода
// сообщения возвращали объекты string. Содержимое этих объектов должно 
// выводиться в функции main().
#include <iostream>
#include <cassert>
using namespace std;

// Макрос для определения фиктивных функций:
#define DF(N) string N() { \
	assert("a" != #N); return #N; }

DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);

string (*func_table[])() = {a, b, c, d, e, f, g};

int main() {
	string var;
	while (1) {
		cout << "press a key from 'a' to 'g' "
		"or q to quit" << endl;
		char c, cr;
		cin.get(c); cin.get(cr);	// Вторая операция - для возврата курсора
		if (c == 'q')
			break;	// ... Выход из while(1)
		if (c < 'a' || c > 'g')
			continue;
		var = (*func_table[c - 'a'])();
		cout << "function " << var << " called..." << endl;
	}
} ///:~
