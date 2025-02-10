#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <functional>
#include <random>
#include <chrono>

int Dice(std::mt19937& gene) {
	std::uniform_int_distribution<> distr(1, 6);
	return distr(gene);
}

void WaitResult(std::function<void()> p, int second) {

	int s = second / 3;
	std::string message;
	std::cout << message;
	for (int i = 0; i < 3; ++i) {
		std::cout << ".";
		std::cout.flush();
		Sleep(s * 1000);
	}

	p();
}


int main() {

	std::random_device rd;
	std::mt19937 generator(rd());


	int expectation = 1;
	int diceResult = 0;

	std::function<void()> fx = [&]() {
		if (expectation % 2 == 0 && diceResult % 2 == 0
			|| expectation % 2 == 1 && diceResult % 2 == 1) {
			printf("正解\n");
		} else {
			printf("不正解\n");
		}
		printf("サイコロの目 : %d\n", diceResult);
		};

	while (expectation != 0) {
		printf("奇数なら1を、偶数なら２を入力\n");


		diceResult = Dice(generator);
		if (std::cin >> expectation) {
			switch (expectation) {
			case 1:
				printf("あなたが予想したのは奇数\n\n");
				break;
			case 2:
				printf("あなたが予想したのは偶数\n\n");
				break;
			default:
				printf("指定されている数字を入力してください\n\n");
				continue;
			}
		}
		printf("結果は");
		WaitResult(fx, 3);

		printf("続けるなら１を、終了するなら0を押してください\n");
		if (std::cin >> expectation) {
			printf("\n");
		}

	}


	return 0;
}