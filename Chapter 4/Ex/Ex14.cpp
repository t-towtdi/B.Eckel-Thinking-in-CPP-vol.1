//: EX04:Ex14.cpp
// Создайте объект Stack для хранения объектов Video из упражнения 13. 
// Определите несколько объектов Video, сохраните их в стеке и выведите при 
// помощи функции Video::print().
#include "..\Stack.h"
#include "Video.h"

int main() {
	Stack videos;
	videos.initialize();
	
	Video v1, v2, v3;
	v1.initialize(); v2.initialize(); v3.initialize();
	v1.name = "Film1"; v2.name = "Film2"; v3.name = "Film3";
	v1.cost = 2.33; v2.cost = 3.45; v3.cost = 5.22;
	v1.duration == 1.23; v2.duration = 1.12; v3.duration = 0.23;
	v1.actors.push_back("Actor1"); v1.actors.push_back("Actor2"); 
	v2.actors.push_back("Actor3"); v2.actors.push_back("Actor4");
	v3.actors.push_back("Actor4"); v3.actors.push_back("Actor5");
	
	videos.push(&v1); videos.push(&v2); videos.push(&v3);
	
	Video* v;
	while ((v = (Video*)videos.pop()) != 0) 
		v->print();
}
