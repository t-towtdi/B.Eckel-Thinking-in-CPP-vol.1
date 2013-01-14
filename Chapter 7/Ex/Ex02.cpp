//: EX07:Ex02.cpp
// Создайте класс Message с конструктором, получающим один аргумент типа 
// string со значением по умолчанию. Определите закрытую переменную string;
// конструктор должен просто присваивать значение переданного аргумента
// внутренней переменной string. Создайте в классе Message две перегруженные
// функции print(): первая функция должна вызываться без аргументов и выводить
// сообщение, хранящееся в объекте, а другая функция должна получать аргумент
// string и выводить его содержимое вместе с сообщением из объекта. Насколько
// оправдан такой подход вместо того, в котором используются конструкторы?
#include <string>
#include <iostream>
using namespace std;

class Message {
	string message;
public:
	Message(string = "dumb message");
	~Message();
	void print();
	void print(string another_message);
};

Message::Message(string incoming_message) {
	message = incoming_message;
}

Message::~Message() {}

void Message::print() {
	cout << message << endl;
}

void Message::print(string another_message) {
	cout << message << " " << another_message << endl;
}

int main() {
	Message m1;
	Message m2("This is another object.");
	m1.print(); m1.print("Call with arguments");
	m2.print(); m2.print("Call with arguments");
}
