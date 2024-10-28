#include "Enemy.h"
#include <iostream>


void Enemy::Update() {

	if (phaseTime_ == 0) {
		phase_ = Phase::Approach;
		isNotice_ = true;
	}
	else if (phaseTime_ == 40) {
		phase_ = Phase::Attack;
		isNotice_ = true;
	}
	else if (phaseTime_ == 80) {
		phase_ = Phase::Withdrawal;
		isNotice_ = true;
	}

	phaseTime_++;

	(this->*spFuncTable[static_cast<size_t>(phase_)])();

	// �����ȏ���

}

void Enemy::Approach() {
	if (isNotice_) {
		std::cout << "�[�[�[�ڋߒ��[�[�[" << std::endl;
		std::cout << std::endl;
		isNotice_ = false;
	}
}

void Enemy::Attack() {
	if (isNotice_) {
		std::cout << "�[�[�[�ˌ����[�[�[" << std::endl;
		std::cout << std::endl;
		isNotice_ = false;
	}
}

void Enemy::Withdrawal() {
	if (isNotice_) {
		std::cout << "�[�[�[���E�����[�[�[" << std::endl;
		std::cout << std::endl;
		isNotice_ = false;
	}

}

bool Enemy::GetOut() {
	if (phase_ == Phase::Withdrawal) {
		return false;
	}
	return true;
}

void (Enemy::* Enemy::spFuncTable[])() = {

	&Enemy::Approach,
	&Enemy::Attack,
	&Enemy::Withdrawal

};
