#pragma once
#include <iostream>


class Bird {
public:
	Bird();
	virtual ~Bird();

public:

	virtual void Sing();

protected:

	const char* name;
};
