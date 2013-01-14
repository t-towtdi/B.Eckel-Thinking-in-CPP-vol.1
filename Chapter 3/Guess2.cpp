//: C03:Guess2.cpp
// Угадывание числа с использованием цикла do-while
#include <iostream>
using namespace std;

int main() {
	int secret = 15;
	int guess;	// Инициализация не нужна
	do {
		cout << "guess the number: ";
		cin >> guess;	// Здесь происходит инициализация
	} while (guess != secret);
	cout << "You got it!" << endl;
} ///:~