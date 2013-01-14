//: EX03:Ex04.cpp
// Измените программу Menu.cpp так, чтобы в ней 
// использовались команды switch вместо if.
#include <iostream>
using namespace std;

int main() {
	char c;		// Переменная для хранения ввода
	while (c != 'q') {
		cout << "MAIN MENU:" << endl;
		cout << "l: left, r: right, q: quit -> ";
		cin >> c;
		switch (static_cast<int>(c)) {
			case 113:
			break;	// Выход из "while(1)"
			case 108: {
				cout << "LEFT MENU:" << endl;
				cout << "select a or b: ";
				cin >> c;
				switch (static_cast<int>(c)) {
					case 97: {
						cout << "you chose 'a'" << endl;
						break;
					}
					case 98: {
						cout << "you chose 'b'" << endl;
						break;
					} default: {
						cout << "you didn't choose a or b!"
							<< endl;
						break;
					}
				}
				break;
			}
			case 114: {
				cout << "RIGHT MENU:" << endl;
				cout << "select c or d: ";
				cin >> c;
				switch (static_cast<int>(c)) {
					case 99: {
						cout << "you chose 'c'" << endl;
						break;
					}
					case 100: {
						cout << "you chose 'd'" << endl;
						break;
					}
					default:  {
						cout << "you didn't choose c or d!"
							<< endl;
						break;
					}
					break;
				}
				cout << "you must type l or r or q!" << endl;
				break;
			}
		}
	}
	cout << "quitting menu..." << endl;
} ///:~