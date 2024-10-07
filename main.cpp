#include <iostream>
#include <Windows.h>
#include <stdio.h>

int CalWage(int wage,int time,int limite) {
	// ˜J“­ãŒÀ
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

		printf("%dŠÔ“­‚¢‚½‚Í\n", limiteTime);
		printf("ˆê”Ê“I‚È’À‹à‘ÌŒn : %d\n", normalWage);
		printf("Ä‹A“I‚È’À‹à‘ÌŒn : %d\n\n", recursiveWage);

		normalWage += kWage;
		limiteTime++;

	}



	return 0;
}