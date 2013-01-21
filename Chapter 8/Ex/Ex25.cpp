//: EX08:Ex25.cpp
// В примере Mutable.cpp удалите комментарий в строке, содержащей ошибку. 
// Посмотрите, какое сообщение выдаст компилятор.
class Z {
	int i;
	mutable int j;
public:
	Z();
	void f() const;
};

Z::Z() : i(0), j(0) {}

void Z::f() const {
// Ex25.cpp:15: error: increment of data-member `Z::i' in read-only structure
//!	i++;	// Ошибка -- константная функция
	j++;	// Можно: mutable
}

int main() {
	const Z zz;
	zz.f();	// Функция изменяет константный объект!
} ///:~
