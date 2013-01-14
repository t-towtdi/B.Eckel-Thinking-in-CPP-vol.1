//: EX02:Ex09.cpp
// Создайте три объекта vector<float> и заполните первые два объекта так, как
// в предыдущем примере. Напишите цикл for, который суммирует соответствующие 
// элементы первых двух векторов и заносит результат в соответствующий элемент
// третьего вектора. Выведите содержимое всех трех векторов
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<float> v1, v2, v3;
	float value = 0;
	for (int i = 0; i < 25; i++) {
		value = i + i * 0.1;
		v1.push_back(value);
		v2.push_back(value);
	}
	for (int i = 0; i < v1.size(); i++) {
		v3.push_back(v1[i] + v2[i]);
	}
	for (int i = 0; i < v3.size(); i++) {
		cout << v3[i] << ", ";
	}
	cout << endl;
} ///:~