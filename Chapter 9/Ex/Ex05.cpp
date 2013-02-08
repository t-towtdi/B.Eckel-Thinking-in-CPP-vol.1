//: EX09:Ex05.cpp
// Поэксперементируйте с размерами и сложностью кода функций из упражнения 4. Удастся 
// вам найти граничную точку, в которой подставляемая и неподставляемая функции выполняются 
// за одинаковое время? По возможности  опробуйте программу с разными компиляторами и 
// проанализируйте различия.
#include <iostream>
#include <ctime>

static const int ARRAY_SIZE = 10000000;
int array[ARRAY_SIZE];

int f1(int a, int b) {
	return a + b;
}

inline int f2(int a, int b) {
	return a + b;
}

int main() {
	clock_t start_f1 = clock();
	for (int i = 0; i < ARRAY_SIZE - 1; i++)
		array[i] = f1(i, i + 1);
	clock_t end_f1 = clock();
	std::cout << "f1() time: " << (double)(end_f1 - start_f1)/CLOCKS_PER_SEC << std::endl;
	
	clock_t start_f2 = clock();
	for (int i = 0; i < ARRAY_SIZE - 1; i++)
		array[i] = f1(i, i + 1);
	clock_t end_f2 = clock();
	std::cout << "f2() time: " << (double)(end_f2 - start_f2)/CLOCKS_PER_SEC << std::endl;
}
