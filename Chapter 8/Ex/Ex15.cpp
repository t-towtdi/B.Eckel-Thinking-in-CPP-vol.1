//: C08:Ex15.cpp
// В программе ConstReturnValues.cpp последовательно удаляйте комментарии
// в строках, содержащих ошибки. Посмотрите, какие сообщения выдает компилятор

class X {
	int i;
public:
	X(int ii = 0);
	void modify();
};

X::X(int ii) { i = ii; }

void X::modify() { i++; }

X f5() {
	return X();
}

const X f6() {
	return X();
}

void f7(X& x) { // Передача по неконстантной ссылке
	x.modify();
}

int main() {
	f5() = X(1);	// Можно -- неконстантное возвращаемое значение
	f5().modify();	// Можно
//  Ex15.cpp:31: error: invalid initialization of non-const reference of 
//  type 'X&' from a temporary of type 'X'
//  Ex15.cpp:24: error: in passing argument 1 of `void f7(X&)'
//!	f7(f5());		// Предупреждение или ошибка
// Ошибки компиляции
//  Ex15.cpp:36: error: passing `const X' as `this' argument of 
//  `X& X::operator=(const X&)' discards qualifiers
//!  f6() = X(1);
//  Ex15.cpp:39: error: passing `const X' as `this' argument of 
//  `void X::modify()' discards qualifiers
//!  f6().modify();
//  Ex15.cpp:42: error: invalid initialization of non-const reference 
//  of type 'X&' from a temporary of type 'const X'
//  Ex15.cpp:24: error: in passing argument 1 of `void f7(X&)'
//!f7(f6());
} ///:~
