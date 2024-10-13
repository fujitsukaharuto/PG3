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
			printf("����\n");
		}
		else {
			printf("�s����\n");
		}
		printf("�T�C�R���̖� : %d\n", diceResult);
		};

	while (expectation != 0) {
		printf("��Ȃ�1���A�����Ȃ�Q�����\n");


		diceResult = Dice(generator);
		if (std::cin >> expectation) {
			switch (expectation) {
			case 1:
				printf("���Ȃ����\�z�����̂͊\n\n");
				break;
			case 2:
				printf("���Ȃ����\�z�����̂͋���\n\n");
				break;
			default:
				printf("�w�肳��Ă��鐔������͂��Ă�������\n\n");
				continue;
			}
		}
		printf("���ʂ�");
		WaitResult(fx, 3);

		printf("������Ȃ�P���A�I������Ȃ�0�������Ă�������\n");
		if (std::cin >> expectation) {
			printf("\n");
		}

	}


	return 0;
}