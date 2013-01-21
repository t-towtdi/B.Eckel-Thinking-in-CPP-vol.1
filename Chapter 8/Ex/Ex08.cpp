//: EX08:Ex08.cpp
// Создайте два указателя на const long, используя обе формы объявления. Свяжите
// один из указателей с массивом long. Убедитесь в том, что значение указателя
// можно увеличивать и уменьшать, но нельзя изменить те данные, на которые
// он ссылаетя.
#include <iostream>

int main() {
	const long* array1;// = {1, 2, 3, 4, 5, 5};
	long const* array2;// = {6, 7, 8, 9, 0};
	long array3[] = {1, 2, 3, 4, 5, 5};
	array2 = array3;
	array1 = array3;
	
	for (int i = 0; i < sizeof(array3) / sizeof(*array3); array1++, i++) {
		std::cout << *array1 << std::endl;
//!		*array1 = 5;
	}
}
