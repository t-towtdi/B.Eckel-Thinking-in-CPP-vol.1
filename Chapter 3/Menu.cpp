//: C03:Menu.cpp
// Простая система меню
// для демонстрации команд "break" и "ontinue"
#include <iostream>
using namespace std;

int main() {
	char c;		// Переменная для хранения ввода
	while (true) {
		cout << "MAIN MENU:" << endl;
		cout << "l: left, r: right, q: quit -> ";
		cin >> c;
		if (c == 'q')
			break;	// Выход из "while(1)"
		if (c == 'l') {
			cout << "LEFT MENU:" << endl;
			cout << "select a or b: ";
			cin >> c;
			if (c == 'a') {
				cout << "you chose 'a'" << endl;
				continue;	// Возврат к главному меню
			}
			if (c == 'b') {
				cout << "you chose 'b'" << endl;
				continue;	// Возврат к главному меню
			}
			else {
				cout << "you didn't choose a or b!"
					 << endl;
				continue;	// Возврат к главному меню
			}
		}
		if (c == 'r') {
			cout << "RIGHT MENU:" << endl;
			cout << "select c or d: ";
			cin >> c;
			if (c == 'c') {
				cout << "you chose 'c'" << endl;
				continue;	// Возврат к главному меню
			}
			if (c == 'd') {
				cout << "you chose 'd'" << endl;
				continue;	// Возврат к главному меню
			}
			else {
				cout << "you didn't choose c or d!"
					 << endl;
				continue;	// Возврат к главному меню
			}
		}
		cout << "you must type l or r or q!" << endl;
	}
	cout << "quitting menu..." << endl;
} ///:~