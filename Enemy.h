#pragma once

class Enemy {
public:
	Enemy() = default;
	~Enemy() = default;

	enum class Phase {

		Approach,
		Attack,
		Withdrawal

	};


public:

	void Update();

	//================
	// �s��
	//================

	// �ڋ�
	void Approach();

	// �U��
	void Attack();

	// ���E
	void Withdrawal();


	// �O�ɏo�čs����
	bool GetOut();

private:

	static void (Enemy::* spFuncTable[])();

private:

	int phaseTime_ = 0;
	Phase phase_;
	bool isNotice_ = true;

};
