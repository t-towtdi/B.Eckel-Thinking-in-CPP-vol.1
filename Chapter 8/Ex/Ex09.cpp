//: EX08:Ex09.cpp
// Создайте константный указатель на double, свяжите его с массивом double.
// Убедитесь в том, что программа может изменять данные, на которые ссылается
// указатель, но не может изменять значение указателя.
#include <iostream>

int main() {
	double array1[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
	double* const var1 = array1;

	for (int i = 0; i < sizeof array1 / sizeof *array1; i++) {
		std::cout << *(var1 + i) << std::endl;
		*var1 = 7.7;
//!		var1 += i;
	}
	
	std::cout << "Changed: " << *var1 << std::endl;
} ///:~
