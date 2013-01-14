//: C03:Enum.cpp
// ќтслеживание типа фигуры

enum ShapeType {
	circle,
	square,
	rectangle
};	// ќпределение перечисл€емого типа, как и определение структуры,
// должно завершатьс€ точкой с зап€той.

int main() {
	ShapeType shape = circle;
	// Ќекоторые действи€...
	// ƒальнейшее зависит от разновидности фигуры:
	switch(shape) {
		case circle: /* дл€ кругов */ break;
		case square: /* дл€ квадратов */ break;
		case rectangle: /* дл€ пр€моугольников */ break;
	}
} ///:~