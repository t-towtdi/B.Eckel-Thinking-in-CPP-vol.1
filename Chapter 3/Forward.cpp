//: C03:Forward.cpp
// ќпережающие объ€влени€ функций и данных
#include <iostream>
using namespace std;

// ќбъ€влени€ не €вл€ютс€ внешними в нормальном смысле,
// но компил€тор должен знать о том, что они где-то существуют:
extern int i;
extern void func();

int main() {
	i = 0;
	func();
}

int i;	// ќпределение данных
void func() {
	i++;
	cout << i;
} ///:~