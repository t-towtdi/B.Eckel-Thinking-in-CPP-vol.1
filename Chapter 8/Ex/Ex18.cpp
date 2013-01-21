//: EX08:Ex18.cpp
// В программе ConstTemporary.cpp удалите комментарий в строке, содержащей
// ошибку. Посмотрите, какое сообщение выдаст компилятор
class X {};

X f() { return X(); }	// Возвращение по значению

void g1(X&) {}			// Передача по обычной ссылке
void g2(const X&) {}	// Передача по ссылке на константу

int main() {
	// Ошибка: f() создает константный временный объект:
	// Ex18.cpp:13: error: invalid initialization of non-const reference 
	// of type 'X&' from a temporary of type 'X'
	// Ex18.cpp:8: error: in passing argument 1 of `void g1(X&)'
//!	g1(f());
	// Можно: g2 получает ссылку на константу
	g2(f());
} ///:~
