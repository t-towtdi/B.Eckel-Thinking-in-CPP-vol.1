//: C03:Menu2.cpp
// Пример с меню с использованием команды switch
#include <iostream>
using namespace std;

int main() {
	bool quit = false;	// Флаг выхода
	while (quit == false) {
		cout << "Select a, b, c or q to quit: ";
		char response;
		cin >> response;
		switch (response) {
			case 'a' : 	cout << "you chose 'a'" << endl;
						break;
			case 'b' : 	cout << "you chose 'b'" << endl;
						break;
			case 'c' :  cout << "you chose 'c'" << endl;
						break;
			case 'q' :  cout << "quitting menu" << endl;
						quit = true;
						break;
			default  :  cout << "Please use a, b, c, or q!"
						     << endl;
		}
	}
} ///:~