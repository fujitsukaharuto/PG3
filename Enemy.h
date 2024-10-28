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
	// 行動
	//================

	// 接近
	void Approach();

	// 攻撃
	void Attack();

	// 離脱
	void Withdrawal();


	// 外に出て行った
	bool GetOut();

private:

	static void (Enemy::* spFuncTable[])();

private:

	int phaseTime_ = 0;
	Phase phase_;
	bool isNotice_ = true;

};
