//: C03:PointerIncrement.cpp
#include <iostream>
using namespace std;

int main() {
	int i[10];
	double d[10];
	int* ip = i;
	double * dp = d;
	cout << "ip = " << (long)ip << endl;
	ip++;
	cout << "ip = " << (long)ip << endl;
	cout << "dp = " << (long)dp << endl;
	dp++;
	cout << "dp = " << (long)dp << endl;
} ///:~