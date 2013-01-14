//: C03:gotoKeyword.cpp
// Пресловутая команда goto поддерживаемая в C++
#include <iostream>
using namespace std;

int main() {
	long val = 0;
	for (int i = 1; i < 1000; i++) {
		for (int j = 1; j < 100; j+=10) {
			val = i * j;
			if (val > 47000)
				goto bottom;
				// Команда break передаст управление только к внешнему циклу 'for'
		}
	}
	bottom:	// Метка
	cout << val << endl;
} ///:~