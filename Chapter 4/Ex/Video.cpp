// EX04:Video.cpp
#include "Video.h"
#include <iostream>
using namespace std;

void Video::print() {
	cout << "Film name: " << name << endl;
	cout << "Film duration: " << duration << endl;
	cout << "Film cost: " << cost << endl;
	cout << "Film actors: ";
	for (int i = 0; i < actors.size(); i++)
		cout << actors[i] << "; ";
	cout << endl;

}

void Video::release() {
	isReleased = true;
}

void Video::initialize() {
	name = "";
	duration = 0.00;
	cost = 0.00;
	isReleased = false;
}
