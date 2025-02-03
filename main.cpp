#include <stdio.h>
#include <cctype>
#include <iostream>
#include <Windows.h>

template <typename T>
T add(T a, T b) {
	return static_cast<T>(a + b);
}

template <typename T>
T compar(T a, T b) {
	return a <= b ? a : b;
}

template<>
char compar<char>(char a, char b) {
	std::cout << "あい" << std::endl;
	std::cout << "数字以外は代入できません" << std::endl;
	return '\0';

}



int main() {

	std::cout << compar<int>(1, 2) << std::endl;
	std::cout << compar<float>(10.0f, 8.0f) << std::endl;
	std::cout << compar<double>(0.01, 0.003) << std::endl;
	std::cout << compar<char>('1', '2') << std::endl;

	return 0;
}