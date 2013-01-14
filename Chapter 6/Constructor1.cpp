//: C06:Constructor1.cpp
// Конструкторы и деструкторы
#include <iostream>
using namespace std;

class Tree {
	int height;
public:
	Tree(int initialHeight);	// Конструктор
	~Tree();					// Дуструктор
	void grow(int years);
	void printsize();
};

Tree::Tree(int initialHeight) {
	height = initialHeight;
}

Tree::~Tree() {
	cout << "inside Tree destructor" << endl;
	printsize();
}

void Tree::grow(int years) {
	height += years;
}

void Tree::printsize() {
	cout << "Tree height is " << height << endl;
}

int main() {
	cout << "before opening brace" << endl;
	{
		Tree t(12);
		cout << "after Tree creation" << endl;
		t.printsize();
		t.grow(4);
		cout << "before closing brace" << endl;
	}
	cout << "after closing brace" << endl;
} ///:~
