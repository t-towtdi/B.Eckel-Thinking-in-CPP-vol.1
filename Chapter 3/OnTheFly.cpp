//: C03:OntheFly.cpp
// ќпределение переменных перед использованием
#include <iostream>
using namespace std;

int main() {
	// ...
	{ // начало новой области видимости
		int q = 0; // — требует, чтобы определени€ находились в этой точке
		// ...
		// ќпределение переменных перед использованием:
		for (int i = 0; i < 100; i++) {
			q++;	// q принадлежит к внешней области видимости
			// ќпределение в конце области видимости:
			int p = 12;
		}
		int p = 1;	// ƒруга€ переменна€ p
	} // «авершение области видимости, содержащей q и внешнюю переменную p
	cout << "Type characters:" << endl;
	while (char c = cin.get() != 'q') {
		cout << c << " wasn't it" << endl;
		if (char x = c == 'a' || c == 'b')
			cout << "You typed a or b" << endl;
		else
			cout << "You typed " << x << endl;
	}
	cout << "Type A, B, or C" << endl;
	switch (int i = cin.get()) {
		case 'A': cout << "Snap" << endl; break;
		case 'B': cout << "Crackle" << endl; break;
		case 'C': cout << "Pop" << endl; break;
		default: cout << "Not A, B, or C!" << endl;
	}
} ///:~