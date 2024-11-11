#pragma once
#include "IShape.h"

class Rectangle : public IShape {
public:
	Rectangle();
	~Rectangle();

public:

	void Size() override;
	void Draw() override;

private:

	float area;
	float vertical;
	float horizontal;

};
