#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

int main() {

	Circle* circle;
	circle = new Circle;
	Rectangle* rectangle;
	rectangle = new Rectangle;

	circle->Size();
	circle->Draw();

	rectangle->Size();
	rectangle->Draw();

	delete circle;
	delete rectangle;

	return 0;
}