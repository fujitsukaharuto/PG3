#include "Circle.h"
#include <iostream>

Circle::Circle() {
	radius = 3.0f;
}

Circle::~Circle() {
}

void Circle::Size() {
	float pi = 3.141592f;
	area = pi * powf(radius, 2.0f);
}

void Circle::Draw() {
	std::cout << "–ÊÏ‚Í" << area << std::endl;
}
