#include "Crow.h"

Crow::Crow() {
	name = "カラス";
}

Crow::~Crow() {
}

void Crow::Sing() {
	std::cout << "カー" << std::endl;
}
