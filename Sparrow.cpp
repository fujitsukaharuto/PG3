#include "Sparrow.h"

Sparrow::Sparrow() {
	name = "スズメ";
}

Sparrow::~Sparrow() {
}

void Sparrow::Sing() {
	std::cout << "チュン" << std::endl;
}
