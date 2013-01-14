//: C03:Arrays.cpp
#include <iostream>
using namespace std;

int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = i * 10;
		cout << "a[" << i << "] = " << a[i] << endl;
	}
} ///:~