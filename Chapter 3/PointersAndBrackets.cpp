//: C03:PointersAndBrackets.cpp
int main() {
	int a[10];
	int* ip = a;
	for (int i = 0; i < 10; i++)
		ip[i] = i * 10;
} ///:~