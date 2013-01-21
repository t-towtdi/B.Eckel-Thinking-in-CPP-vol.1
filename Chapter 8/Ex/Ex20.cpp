//: EX08:Ex20.cpp
// Создайте класс MyString, который содержит переменную string, конструктор,
// инициализирующий эту переменную, и функцию print(). Измените пример StringStack.cpp
// так, чтобы в контейнере хранились объекты MyString,  организуйте их вывод в функции
// main().
#include <string>
#include <iostream>
using namespace std;

class MyString {
	const string* my_string;
public: 
	MyString(const string* myString);
	void print() const;
};

MyString::MyString(const string* myString) {
	my_string = myString;
}

void MyString::print() const {
	cout << *my_string << endl;
}



class StringStack {
	static const int size = 100;
	const MyString* stack[size];
	int index;
public:
	StringStack();
	void push(const MyString* s);
	const MyString* pop();
};

StringStack::StringStack() : index(0) {
	memset(stack, 0, size * sizeof(string*));
}

void StringStack::push(const MyString* s) {
	if (index < size)
		stack[index++] = s;
}

const MyString* StringStack::pop() {
	if (index > 0) {
		const MyString* rv = stack[--index];
		stack[index] = 0;
		return rv;
	}
	return 0;
}

string iceCream[] = {
	"pralines & cream",
	"fudge ripple",
	"jamocha almond fudge",
	"wild mountain blackberry",
	"raspberry sorbet",
	"lemon swirl",
	"rocky road",
	"deep chocolate fudge"
};

const int iCsz = sizeof iceCream / sizeof *iceCream;

int main() {
	StringStack ss;
	for (int i = 0; i < iCsz; i++)
		ss.push(new MyString(&iceCream[i]));
	const MyString* cp;
	
	while ((cp = ss.pop()) != 0) {
		cp->print();
		delete cp;
	}
} ///:~
