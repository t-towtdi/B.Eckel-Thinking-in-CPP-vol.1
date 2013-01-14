//: C03:Guess.cpp
// Угадывание числа (демонстрация цикла while)
#include <iostream>
using namespace std;

int main() {
	int secret = 15;
	int guess = 0;
	// "!=" - проверка условия "не равно";
	while (guess != secret) {	// составная команда
		cout << "guess the number: ";
		cin >> guess;
	}
	cout << "You guessed it!" << endl;
} ///:~