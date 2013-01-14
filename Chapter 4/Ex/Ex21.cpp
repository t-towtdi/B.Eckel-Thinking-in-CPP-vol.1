//: EX04:Ex21.cpp
// Как было показано в этой главе, С++ автоматически создает для структур
// тип, что эквивалентно применению оператора typedef. То же самое длеается
// для перечисляемых типов и объединений. Напишите небольшую программу для 
// демнострации этого факта.
#include <iostream>
using namespace std;

struct Struct1 {
};

union Union1 {
};

enum Enum1 {
};

int main() {
	cout << "sizeof(Struct1) = " << sizeof(Struct1) << endl;
	cout << "sizeof(Union1) = " << sizeof(Union1) << endl;
	cout << "sizeof(Enum1) = " << sizeof(Enum1) << endl;
}