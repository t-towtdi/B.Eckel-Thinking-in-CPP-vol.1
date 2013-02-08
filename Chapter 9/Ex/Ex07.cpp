//: EX09:Ex07.cpp
// Создайте класс, содержащий массив char. Включите в него подставляемый конструткор,
// который использует стандартную библиотечную функцию С memset() для инициализации
// массива значением, переданным в аргументе ("по умолчанию"). Также включите в класс 
// подставляемую функцию print() для вывода всех символов массива.
#include <iostream>
#include <cstdlib>
#include <string>

class X {
	char* array;
	int length;
public:
	X(const int length, const int init = '-') { 
		this->length = length;
		array = new char[length];
		memset(array, init, length);
	}
	~X() { delete array;}
	inline void print() { 
		for (int i = 0; i < length; i++)
			std::cout << array[i];
		std::cout << std::endl; 
	}
};

int main() {
	X x(10, 'A');
	x.print();
}
