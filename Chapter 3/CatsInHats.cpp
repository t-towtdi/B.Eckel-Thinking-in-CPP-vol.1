//: C03:CatsInHats.cpp
// Простая демонстрация рекурсии
#include <iostream>
using namespace std;

void removeHat(char cat) {
	for (char c = 'A'; c < cat; c++)
		cout << " ";
	if (cat <= 'Z') {
		cout << "cat " << cat << endl;
		removeHat(cat + 1);	// Рукурсивный вызов
	} else
		cout << "VOOM!!!" << endl;
}

int main() {
	removeHat('A');
} ///:~