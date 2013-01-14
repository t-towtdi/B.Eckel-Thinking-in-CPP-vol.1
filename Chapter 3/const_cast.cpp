//: C03:const_cast.cpp
int main() {
	const int i = 0;
	int* j = (int*)&i;	// Устаревшая форма
	j = const_cast<int*>(&i);	// Рекомендуемая форма
	// Одновременное выполнение других преобразований не допускается
	//! long* l = const_cast<long*>(&i);	// Ошибка
	volatile int k = 0;
	int* u = const_cast<int*>(&k);
} ///:~