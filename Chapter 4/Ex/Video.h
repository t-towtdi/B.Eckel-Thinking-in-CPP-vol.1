//: EX04:Video.h

#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>
#include <vector>

struct Video {
	std::string name;
	float duration;
	double cost;
	std::vector<std::string> actors;
	bool isReleased;
	
	void initialize();
	void print();
	void release();
};

#endif	// VIDEO_H
