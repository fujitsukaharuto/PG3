#pragma once
#include "Bird.h"

class Sparrow :public Bird {
public:
	Sparrow();
	~Sparrow();

public:

	void Sing() override;

private:

};

