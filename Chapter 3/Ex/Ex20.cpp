//: EX03:Ex20.cpp
// »спользу€ приемы, освоенные при написании программы ArrayAddresses.cpp,
// организуйте вывод размера структуры и адресов элементов в программе 
// StructArray.cpp
#include <iostream>
using namespace std;

typedef struct {
	int i, j, k;
} ThreeDpoint;

int main() {
	ThreeDpoint p[10];
	for (int i = 0; i < 10; i++) {
		p[i].i = i + 1;
		p[i].j = i + 2;
		p[i].k = i + 3;
		cout << "Address p[i].i :" << (long)&p[i].i << endl;
		cout << "Address p[i].j :" << (long)&p[i].j << endl;
		cout << "Address p[i].k :" << (long)&p[i].k << endl;
	}
	cout << "sizeof(struct ThreeDpoint): " << sizeof(ThreeDpoint) << endl;
	
} ///:~