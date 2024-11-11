#include <iostream>
#include <Windows.h>
#include "Sparrow.h"
#include "Crow.h"

int main() {

	Bird* bird[2];

	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			bird[i] = new Sparrow;
		}
		else {
			bird[i] = new Crow;
		}
	}


	for (int i = 0; i < 2; i++) {
		bird[i]->Sing();
	}


	for (int i = 0; i < 2; i++) {
		delete bird[i];
	}


	return 0;
}