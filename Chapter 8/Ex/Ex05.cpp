//: EX08:Ex05.cpp
// Создайте константу, значение которой определяется на стадии выполнения;
// для этого программа должна выяснять текущее время на момент запуска
// (воспользуйтесь стандартным заголовочным файлом <ctime>). Позднее в программе
// попытайтесь снова считать текущее время в константу и посмотрите, что 
// произойдет.
#include <ctime>
#include <iostream>

int main() {
	const time_t current_time = time(NULL);
	struct tm* timeinfo = localtime(&current_time);
	std::cout << "Current time: " << asctime(timeinfo) << std::endl;
//!	current_time = time(NULL);
//!	time(&current_time);
} ///:~
