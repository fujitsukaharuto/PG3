#pragma once
#include "Bird.h"


class Crow :public Bird {
public:
	Crow();
	~Crow();

public:

	void Sing() override;

private:

};
