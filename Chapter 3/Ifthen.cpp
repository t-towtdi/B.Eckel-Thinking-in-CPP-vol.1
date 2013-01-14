//: C03:Ifthen.cpp
// Условные команды if и if-else
#include <iostream>
using namespace std;

int main() {
	int i;
	cout << "type a number and 'Enter'" << endl;
	cin >> i;
	if (i > 5)
		cout << "It's greater than 5" << endl;
	else
		if (i < 5)
			cout << "It's less than 5 " << endl;
		else
			cout << "It's equal to 5 " << endl;
			
	cout << "tpe a number and 'Enter'" << endl;
	cin >> i;
	if (i < 10)
		if (i > 5)	// Вложенная команда "if"
			cout << "5 < i < 10" << endl;
		else
			cout << "i <= 5" << endl;
	else	// Соответствует условию "if ( i < 10 )
		cout << "i >= 10" << endl;
} ///:~