#pragma once
#include "IShape.h"

class Circle : public IShape{
public:
	Circle();
	~Circle();

public:

	void Size()override;
	void Draw()override;

private:

	float area;
	float radius;

};


