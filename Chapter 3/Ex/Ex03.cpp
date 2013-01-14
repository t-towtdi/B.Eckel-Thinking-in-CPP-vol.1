//: EX03:Ex03.cpp
// Напишите программу, которая при помощи цикла while читает слова из стандатного
// ввода (cin) в объект string. Цикл while должен быть бесконечным,
// а выход из него осуществляется по команде break. Каждое прочитанное слово при 
// помощи серии команд if сначала "отображается" на целое число,
// которое затем используется командой switch в качестве критерия выбора
// (не стоит полагать, что такая последовательность событий является хорошим
// стилем программирования; она нужна только для тренировки в работе с управляющими
// конструкциями). Внутри каждой секции case должно выводиться какое-нибудь осмысленное
// сообщение. Самостоятельно выберите "особые" слова и их интерпретацию. Также
// решите, какое слово должно сообщать о завершении программы. Проверьте работу
// программы и попробуйте перенаправить стандартный ввод команды в чтение из файла
// (чтобы вам не пришлось вводить лишние данные, воспользуйтесь файлом с исходным
// текстом программы).
#include <iostream>
using namespace std;

int main() {
	string word;
	int criteria;
	
	cout << "Enter fruit name or quit for exit" << endl;
	
	while (true) {
		cout << "Enter the word" << endl;
		cin >> word;
		if (word == "orange")
			criteria = 1;
		else if (word == "apple")
			criteria = 2;
		else if (word == "peach")
			criteria = 3;
		else if (word == "peanapple")
			criteria = 4;
		else if (word == "quit")
			break;
			
		switch (criteria) {
			case 1:
				cout << "Do you want orange?" << endl;
				break;
			case 2:
				cout << "Do you want apple?" << endl;
				break;
			case 3:
				cout << "Do you want peach?" << endl;
				break;
			case 4:
				cout << "Do you want peanapple?" << endl;
				break;
		}
	}
} ///:~