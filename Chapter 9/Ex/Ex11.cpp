//: EX09:Ex11.cpp
// Измените упражнение 10 так, чтобы использовать одноименные функции чтения и
// записи.
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
	inline Hue huee() { return hue; }
	inline void huee(Hue hue) { this->hue = hue; }
	inline void print() {
		switch (this->huee()) {
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
