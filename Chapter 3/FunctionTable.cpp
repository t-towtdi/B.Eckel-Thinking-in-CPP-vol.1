//: C03:FunctionTable.cpp
// Использование массива указателей на функции
#include <iostream>
using namespace std;

// Макрос для определения фиктивных функций:
#define DF(N) void N() { \
cout << "function " #N " called..." << endl; }

DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);

void (*func_table[])() = {a, b, c, d, e, f, g};

int main() {
	while (1) {
		cout << "press a key from 'a' to 'g' "
		"or q to quit" << endl;
		char c, cr;
		cin.get(c); cin.get(cr);	// Вторая операция - для возврата курсора
		if (c == 'q')
			break;	// ... Выход из while(1)
		if (c < 'a' || c > 'g')
			continue;
		(*func_table[c - 'a'])();
	}
} ///:~