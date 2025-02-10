#include <iostream>
#include <fstream>
#include <sstream>
#include <queue>
#include <thread>
#include <mutex>
#include <functional>
#include <condition_variable>

int main() {


	std::mutex mutex;
	std::queue<std::vector<std::string>> data;
	std::condition_variable condition;
	bool exit = false;
	std::string filename = "data.csv";

	std::thread th([&]() {
		std::ifstream file(filename);
		if (!file.is_open()) {
			std::cerr << "Failed open file " << std::endl;
			exit = true;
			condition.notify_all();
			return;
		}

		std::string line;
		while (std::getline(file, line)) {
			std::this_thread::sleep_for(std::chrono::milliseconds(2000));

			std::vector<std::string> row;
			std::stringstream ss(line);
			std::string cell;
			while (std::getline(ss, cell, ',')) {
				row.push_back(cell);
			}

			{
				std::unique_lock<std::mutex> lock(mutex);
				data.push(row);
				condition.notify_one(); // 通知
			}
		}

		exit = true;
		condition.notify_all();
		});

	while (true) {

		std::vector<std::string> row;
		{
			std::unique_lock<std::mutex> lock(mutex);
			condition.wait(lock, [&]() { return !data.empty() || exit; });

			if (!data.empty()) {
				row = std::move(data.front());
				data.pop();
			}
		}

		if (!row.empty()) {
			for (const std::string& cell : row) {
				std::cout << cell << " ";
			}
			std::cout << std::endl;
		}

		if (exit && data.empty()) {
			break;
		}
	}

	exit = true;
	th.join();
	return 0;
}