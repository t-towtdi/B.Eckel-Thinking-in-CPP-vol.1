//: EX03:Ex24.cpp
// Измените программу PointersArithmetic.cpp, чтобы она работала с типами long
// и long double
int main() {
	long a[10];
	long* ipa = a;
	for (int i = 0; i < 10; i++) {
		ipa[i] = i * 10;
	}
		
	long double b[10];
	long double* ipb = b;
	for (int i = 0; i < 10; i++) {
		ipb[i] = i * 10;
	}
} ///:~