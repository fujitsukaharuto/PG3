#include <iostream>
#include <Windows.h>

#include "Enemy.h"

int main() {

	std::unique_ptr<Enemy> enemy;
	enemy = std::make_unique<Enemy>();

	while (enemy->GetOut()) {
		enemy->Update();
	}

	return 0;
}