//: EX05:Ex15.cpp
// —оздайте класс StackOfInt (стек, содержащий значени€ int) c применением
// методики "чеширского кота"; низкоуровнева€ структура данных, непосредственно
// используема€ дл€ хранени€ элементов, должна быть скрыта в классе 
// StackImp. –еализуйте две версии StackImp: в одной должен быть задействован
// массив int фиксированной длинны, а в другой - vector<int>. ќграничьте
// максимальный размер стека, чтобы вам не пришлось беспокоитьс€ о расширении
// массива в первой версии. ќбратите внимание: изменение StackImp не об€зательно
// приведет к изменению StackOfInt.h
#include "StackOfInt.h"
#include <iostream>
using namespace std;

int main() {
	const int size = 15;
	StackOfInt stackOfInt;
	stackOfInt.initialize(size);
	for (int i = 0; i < size; i++)
		stackOfInt.push(i);
	
	int return_value;
	while ((return_value = stackOfInt.pop()) != NULL)
		cout << return_value << endl;
} ///:~
