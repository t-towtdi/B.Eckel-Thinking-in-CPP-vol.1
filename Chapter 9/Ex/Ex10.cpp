//: EX09:Ex10.cpp
// Создайте перечисляемый тип Hue с элементами red, blue и yellow. Затем создайте
// класс Color, содержащий переменную типа Hue и конструктор, присваивающий Hue
// значение переданного аргумента. Определите для Hue функции доступа get и set. 
// Все функции должны быть подставляемыми.
#include <iostream>

enum Hue {
	red,
	blue,
	yellow
};

class Color {
	Hue hue;
public:
	Color() : hue() {}
	Color(Hue hue): hue(hue) {}
	inline Hue getHue() { return hue; }
	inline void setHue() { this->hue = hue; }
	inline void print() {
		switch (this->getHue()) {
			case red: std::cout << "red" << std::endl; break;
			case blue: std::cout << "blue" << std::endl; break;
			case yellow: std::cout << "yellow" << std::endl; break;
			default: std::cout << "unknown" << std::endl; break;
		}
	}
};

int main() {
	Color color;
	color.print();
}
