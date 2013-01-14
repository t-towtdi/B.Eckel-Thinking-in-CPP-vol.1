//: EX03:Ex14.cpp
// Измените программу Ifthen.cpp так, чтобы в ней использовался тернарный 
// условный оператор (?:)
#include <iostream>
using namespace std;

int main() {
	int i;
	cout << "type a number and 'Enter'" << endl;
	cin >> i;
	(i > 5)?(cout << "It's greater than 5" << endl):(((i < 5)?(cout << "It's less than 5 " << endl):(cout << "It's equal to 5 " << endl)));
			
	cout << "tpe a number and 'Enter'" << endl;
	cin >> i;
	(i < 10)?(((i > 5)?(cout << "5 < i < 10" << endl):(cout << "i <= 5" << endl))):(cout << "i >= 10" << endl);
} ///:~