//: C03:Mathops.cpp
// Математические операторы
#include <iostream>
using namespace std;

// Вспомогательный макрос для вывода строки и значения
#define PRINT(STR, VAR) \
cout << STR " = " << VAR << endl

int main() {
	int i, j, k;
	float u, v, w;	// Также относится к double
	cout << "enter an integer: ";
	cin >> j;
	cout << "enter another integer: ";
	cin >> k;
	PRINT("j", j); PRINT("k", k);
	i = j + k; PRINT("j + k", i);
	i = j - k; PRINT("j - k", i);
	i = k / j; PRINT("k / j", i);
	i = k * j; PRINT("k * j", i);
	i = k % j; PRINT("k % j", i);
	// Следующая команда работает только с целыми числами:
	j %= k; PRINT("j %= k", j);
	cout << "Enter a floating-point number: ";
	cin >> v;
	cout << "Enter another floating-point number:";
	cin >> w;
	PRINT("v", v); PRINT("w", w);
	u = v + w; PRINT("v + w", u);
	u = v - w; PRINT("v - w", u);
	u = v * w; PRINT("v * w", u);
	u = v / w; PRINT("v / w", u);
	// Следующий фрагмент также работает с int, char и double:
	PRINT("u", u); PRINT("v", v);
	u += v; PRINT("u += v", u);
	u -= v; PRINT("u -= v", u);
	u *= v; PRINT("u *= v", u);
	u /= v; PRINT("u /= v", u);
} ///:~