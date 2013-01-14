//: C02:HelloStrings.cpp
// Пример использования стандартного класса C++ string
#include <string>
#include <iostream>
using namespace std;

int main() {
	string s1, s2;	// Пустые строки 
	string s3 = "Hello, World.";	// Инициализированная строка
	string s4("I-am");	// Другой пример инициализации
	s2 = "Today";	// Присваивание
	s1 = s3 + " " + s4;	// Слияние строк
	s1 += " 8 ";	// Присоединение новых символов к строке
	cout << s1 + s2 + "!" << endl;
} ///:~