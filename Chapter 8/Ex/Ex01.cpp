//: EX08:Ex01.cpp
// Создайте три значения const int и просуммируйте их; результат должен
// задавать размер массива в его определении. Попробуйте откомпилировать
// программу на С и посмотрите, что произойдет (обычно компилятор С++ 
// переключается в режим компиляции С при помощи флага командной строки).
#include <stdio.h>

int main() {
	static const int a = 1, b = 2, c = 3;
	char buf[a + b + c];
	printf("Size is: %d\n", sizeof(buf));
	printf("Size of a: %d\n", sizeof(a));
	printf("Address of a: %p\n", &a);
	//std::cout << sizeof(buf) << std::endl;
	//std::cout << "Done..." << std::endl;
}
