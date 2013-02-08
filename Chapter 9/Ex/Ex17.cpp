//: EX09:Ex17.cpp
// »справьте макрос TRACE() так, как описано в тексте главы, и докажите, что в новой 
// версии он работает правильно
#include <iostream>

#define TRACE(s) std::cerr << #s << std::endl, s

void f(int i) {
	i++;
}

int main() {
	for (int i = 0; i < 100; i++)
		TRACE(f(i));
}
