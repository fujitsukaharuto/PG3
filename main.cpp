#include <iostream>
#include <chrono>
#include <string>

int main() {
	// 初期化
	std::string a(1000000, 'a');

	// 代入
	auto start = std::chrono::high_resolution_clock::now();
	std::string b = a;
	auto end = std::chrono::high_resolution_clock::now();
	auto firstTime = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	// 参照
	start = std::chrono::high_resolution_clock::now();
	const std::string c = std::move(a);
	end = std::chrono::high_resolution_clock::now();
	auto secondTime = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	std::cout << "代入時間: " << firstTime.count() << " μs" << std::endl;
	std::cout << "参照時間: " << secondTime.count() << " μs" << std::endl;

	return 0;
}