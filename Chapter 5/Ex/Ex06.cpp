//: EX05:Ex06.cpp
// Создайте класс Hen, определите в нем вложенный класс Nest. В классе Nest
// определите вложенный класс Egg. Каждый класс должен содержать функцию display().
// В функции main() создайте экземпляр каждого класса и вызовите функции display()
// для всех классов.
#include <iostream>
using namespace std;

class Hen {
public:
	class Nest {
	public:
		class Egg {
		public:
			void display();
		};
		
		void display();
	};
	
	void display();
};

void Hen::display() {
	cout << "Hen.display()" << endl;
}

void Hen::Nest::display() {
	cout << "Hen.Nest.display()" << endl;
}

void Hen::Nest::Egg::display() {
	cout << "Hen::Nest::Egg::display()" << endl;
}

int main() {
	Hen h;
	Hen::Nest n;
	Hen::Nest::Egg e;
	
	h.display();
	n.display();
	e.display();
} ///:~
