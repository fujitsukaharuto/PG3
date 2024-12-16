#include <iostream>
#include <Windows.h>
#include <thread>
#include <functional>

int main() {

	int num = 1;

	std::function<void()> RightTh = [&]() {
		std::cout << "thread " << 1 << std::endl;
		num++;
		};

	std::function<void()> RightTh2 = [&]() {
		std::cout << "thread " << 2 << std::endl;
		num++;
		};

	std::function<void()> RightTh3 = [&]() {
		std::cout << "thread " << 3 << std::endl;
		num++;
		};


	std::thread th1(RightTh);
	th1.join();
	std::thread th2(RightTh2);
	th2.join();
	std::thread th3(RightTh3);
	th3.join();

	return 0;
}