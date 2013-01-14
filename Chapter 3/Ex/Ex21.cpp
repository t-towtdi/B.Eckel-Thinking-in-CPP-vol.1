//: EX03:Ex21.cpp
// Создайте массив объектов string и присвойте строку каждому элементу. 
// Выведите содержимое массива в цикле for.
#include <iostream>
using namespace std;

int main() {
	string s[10];
	for (int i = 0; i < 10; i++) {
		cout << "Enter string: "; cin >> s[i];
	}
		
	cout << "Entered values are: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << s[i] << endl;
	}
} ///:~