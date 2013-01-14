//: EX03:Ex25.cpp
// ќпределите переменную типа float. ѕолучить ее адрес, приведите его к типу
// unsigned char и присвойте указателю на unsigned char. ѕри помощи этого указател€
// и конструкции [] организуйте смещение индекса по переменной типа
// float и при помощи функции printBinary(), определенной в этой главе, выведите
// значени€ отдельных байтов переменной (смещение должно происходить от 0 до sizeof(float)-1).
// »змените значение float и попробуйте разобратьс€ во внутреннем представлении числа
// (данные типа float хран€тс€ в специальном формате).
#include "../printBinary.h"
#include <iostream>
using namespace std;

int main() {
	float a;
	float* a_ptr = &a;
	unsigned char* uchar_ptr = reinterpret_cast<unsigned char*>(a_ptr);
	cout << "Enter float value: "; cin >> a;
	for (int i = 0; i < sizeof(float); i++, uchar_ptr++) {
		printBinary(*uchar_ptr);
		cout << " ";
	}
} ///:~