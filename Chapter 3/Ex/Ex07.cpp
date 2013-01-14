//: EX03:Ex07.cpp
// Создайте две функции: первая должна получать аргумент типа string*, а вторая -
// аргумент типа string&. Каждая функция должна изменять внешний объект
// string своим способом. В функции main() создайте и инициализируйте
// объект string, выведите его содержимое, затем передайте каждой из двух
// функций и выведите рузельтаты.
#include <iostream>
using namespace std;

void f1(string* s) {
	*s = "I'm in f1 function";
	cout << *s << endl;
}

void f2(string &s) {
	s = "I'm in f2 function";
	cout << s << endl;
}

int main() {
	string s = "I'm in main function";
	cout << s << endl;
	f1(&s);
	cout << s << endl;
	f2(s);
	cout << s << endl;
} ///:~