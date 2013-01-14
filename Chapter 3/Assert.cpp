//: C03:Assert.cpp
// Использование отладочного макроса assert()
#include <cassert> // Заголовочный файл, содержащий макрос
using namespace std;

int main() {
	int i = 100;
	assert(i != 100);	// Неудача
} ///:~