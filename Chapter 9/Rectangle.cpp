//: C09:Rectangle.cpp
// Функции чтения и записи

class Rectangle {
	int wide, high;
public:
	Rectangle(int w = 0, int h = 0)
		: wide(w), high(h) {}
	int width() const { return wide; }	// Чтение
	void width(int w) { wide = w; }	// Запись
	int height() const { return high; }	// Чтение
	void height(int h) { high = h; }	// Запись
};

int main() {
	Rectangle r(19, 47);
	// Изменение ширины и высоты
	r.height(2 * r.width());
	r.width(2 * r.height());
} ///:~