#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() {
	vertical = 5.0f;
	horizontal = 10.0f;
}

Rectangle::~Rectangle() {
}

void Rectangle::Size() {
	area = vertical * horizontal;
}

void Rectangle::Draw() {
	std::cout << "–ÊÏ‚Í" << area << std::endl;
}
