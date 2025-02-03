#include <iostream>
#include <Windows.h>
#include <stdio.h>

int CalWage(int wage, int time, int limite) {
	// 労働上限
	if (time >= limite) {
		return wage;
	}
	time++;
	return (wage + CalWage(wage * 2 - 50, time, limite));
}


int main() {

	const int kWage = 1027;
	int normalWage = kWage;
	int recursiveWage = 100;

	int limiteTime = 1;

	while (normalWage > recursiveWage) {
		recursiveWage = 100;
		recursiveWage = CalWage(recursiveWage, 1, limiteTime);

		printf("%d時間働いた時は\n", limiteTime);
		printf("一般的な賃金体系 : %d\n", normalWage);
		printf("再帰的な賃金体系 : %d\n\n", recursiveWage);

		normalWage += kWage;
		limiteTime++;

	}



	return 0;
}