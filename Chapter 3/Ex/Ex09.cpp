//: EX03:Ex09.cpp
// Откомпилируйте и запустите программу Static.cpp. Удалите из программы
// ключевое слово static, снова откомпилируйте и запустите ее. Объясните 
// результат.
#include <iostream>
using namespace std;

void func() {
	int i = 0;
	cout << "i = " << i++ << endl;
}

int main() {
	for (int x = 0; x < 10; x++)
		func();
} ///:~