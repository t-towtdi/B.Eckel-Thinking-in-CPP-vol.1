//: EX08:Ex02.cpp
// Убедитесь в том, что компиляторы С и C++ действительно по-разному 
// работают с константами. Создайте глобальную константу и используйте ее
// в глобальном константном выражении; откомпилируйте программу в режимах
// С и С++
#include <stdio.h>

const int a = 1, b = 2, c = 3;
char buf[a + b + c];

int main() {
	printf("Size is: %d\n", sizeof(buf));
	printf("Size of a: %d\n", sizeof(a));
	printf("Address of a: %p\n", &a);
	//std::cout << sizeof(buf) << std::endl;
	//std::cout << "Done..." << std::endl;
}
