//: EX03:Ex29.cpp
// (Задача повышенной трудности) Измените программу FloatingAsBinary.cpp
// так, чтобы она выводила каждую часть double в виде отдельной группы битов.
// Для этого вызовы printBinary() придется заменить вызовами специальной функции
// (для создания которой можно взять за основу printBinary()). Вам придется
// изучить формат представления вещественных чисел и разобраться с порядком
// байтов на вашем компьютере (собственно, в этом и заключается трудность).
#include <cstdlib>
#include <iostream>
using namespace std;

void printBinary(const unsigned char val, int start_position, int end_position) {
	for (int i = end_position; i >= start_position; i--)
		if (val & (1 << i))
			std::cout << "1";
		else
			std::cout << "0";
}

void printBinary(const unsigned char val) {
	printBinary(val, 0, 7);
}

void printDoubleBits(double d, int double_start_position, int double_end_position) {
	unsigned char* ch_ptr = reinterpret_cast<unsigned char*>(&d);
	
	for (int i = 0; i < sizeof(double); i++) {
		// map double to char (for further output)
		int end_position = 7, start_position = 0;
		if (double_end_position < i * 8) continue;
		if (double_start_position > (i + 1) * 8 - 1) continue;
		if (double_start_position - i * 8 <= 7 && double_start_position - i * 8 > 0) 
			start_position = double_start_position - i * 8;
		if ((i + 1) * 8 - 1 - double_end_position <= 7 && (i + 1) * 8 - 1 - double_end_position > 0) 
			end_position = double_end_position - (i) * 8;
		// write out results
		printBinary(ch_ptr[i], start_position, end_position); cout << " ";
	}
}

int main(int argc, char* argv[]) {
	if (argc != 2) {
		cout << "Must provide a number" << endl;
		exit(1);
	}
	double d = atof(argv[1]);
	
	printDoubleBits(d, 2, 24);
	
	cout << endl;
	unsigned char* ch_ptr = reinterpret_cast<unsigned char*>(&d);
	
	for (int i = sizeof(double) - 1; i >= 0; i -= 2) {
		printBinary(ch_ptr[i - 1]); cout << " ";
		printBinary(ch_ptr[i]); cout << " ";
	}
	
} ///:~