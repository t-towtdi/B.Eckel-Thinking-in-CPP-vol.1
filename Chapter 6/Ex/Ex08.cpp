//: EX06:Ex08.cpp
// Используйте агрегатную инициализацию для создания массива объектов
// string. Создайте объект Stack для хранения объектов string и в цикле
// переберите элементы массива; при каждой итерации текущий объект string должен
// заноситься в стек. Затем извлеките объекты string из стека с выводом их
// значений.
#include <iostream>
#include "../Stack3.h"
using namespace std;

int main() {
	string s_array[] = { string("Green"), string("Blue"), 
						 string("Red"), string("Black"), 
						 string("Yellow"), string("Brown"), 
						 string("Pink"), string("Magenta") };
	
	Stack stack;
	
	for (int i = 0; i < sizeof(s_array) / sizeof(*s_array); i++)
		stack.push(&s_array[i]);
	
	string* line;
	while ((line = (string*)stack.pop()) != 0)
		cout << *line << endl;
		
} ///:~
