//: EX05:Ex02.cpp
// Создайте структуру Lib, содержащую три переменные типа string: a, b и c.
// В функции main() создайте объект Lib с именем x и присвойте значения x.a,
// x.b и x.c. Выведите присвоенные значения. Замените а, b и с массивом string
// s[3]. Убедитесь, что сделанное изменение нарушает работу функции main().
// Создайте класс Libc, содержащий закрытые объекты string c именами a, b и сб
// а также функции seta(), geta(), setb(), getb(), setc() и getc() для 
// присваивания/чтения значений этих переменных. Напишите функцию main(), как
// прежде, и замените закрытые объекты a, b и с закрытым массивом string s[3].
// Убедитесь, что сделанное изменение не нарушает работу функции main()
#include <iostream>
using namespace std;

struct Lib {
	//string a, b, c;
	string s[3];
};

struct Libc {
private: 
	string a, b, c;
	string s[3];
public:
	void seta(string x);
	string geta();
	void setb(string x);
	string getb();
	void setc(string x);
	string getc();
};

void Libc::seta(string x) {
	s[0] = x;
}

string Libc::geta() {
	return s[0];
}

void Libc::setb(string x) {
	s[1] = x;
}

string Libc::getb() {
	return s[1];
}

void Libc::setc(string x) {
	s[2] = x;
}

string Libc::getc() {
	return s[2];
}

int main() {
/*
	Lib x;
	x.a = "Red";
	x.b = "Blue";
	x.c = "Green";

	cout << "Colors from Lib x: " << x.a << ", " << x.b << ", " << x.c << endl;
*/
	Libc x;
	x.seta("Red");
	x.setb("Blue");
	x.setc("Green");

	cout << "Colors from Lib x: " << x.geta() << ", " << x.getb() << ", " << x.getc() << endl;

} ///:~
