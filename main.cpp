#include <iostream>
#include <Windows.h>
#include <list>

int main() {

	std::list<const char*> yamanoteLine{
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani",
		"Nippori","Tabata","Komagome","Sugamo","Otsuka","Ikebukuro",
		"Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi",
		"Harajuku","Shibuya","Ebisu","Meguro","Gotanda","Osaki","Shinagawa",
		"Tamachi","Hamamatsucho","Shimbashi","Yurakucho"
	};

	std::cout << "1970”N" << std::endl;
	for (std::list<const char*>::iterator itr = yamanoteLine.begin();
		itr != yamanoteLine.end(); ++itr) {
		std::cout << *itr << std::endl;
	}


	int JY = 1;
	for (std::list<const char*>::iterator itr = yamanoteLine.begin();
		itr != yamanoteLine.end(); ++itr) {
		if (JY == 8) {
			itr = yamanoteLine.insert(itr, "Nishi-Nippori");
		}
		JY++;
	}

	std::cout << std::endl;
	std::cout << "2019”N" << std::endl;
	for (std::list<const char*>::iterator itr = yamanoteLine.begin();
		itr != yamanoteLine.end(); ++itr) {
		std::cout << *itr << std::endl;
	}


	JY = 1;
	for (std::list<const char*>::iterator itr = yamanoteLine.begin();
		itr != yamanoteLine.end(); ++itr) {
		if (JY == 26) {
			itr = yamanoteLine.insert(itr, "Takanawa Gateway");
		}
		JY++;
	}

	std::cout << std::endl;
	std::cout << "2022”N" << std::endl;
	for (std::list<const char*>::iterator itr = yamanoteLine.begin();
		itr != yamanoteLine.end(); ++itr) {
		std::cout << *itr << std::endl;
	}



	return 0;
}