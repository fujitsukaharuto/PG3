#include <iostream>
#include <Windows.h>

template <typename T1,typename T2>
class Compare {
public:
	T1 firstDigit;
	T2 secondDigit;

	Compare(T1 first,T2 second):firstDigit(first),secondDigit(second){}

	T1 Min() {
		return static_cast<T1>(firstDigit < secondDigit ? firstDigit : secondDigit);
	}

private:

};



int main() {

	Compare<int, int> c1(10, 8);
	std::cout << c1.Min() << std::endl;

	Compare<float, float> c2(12.4f, 17.1f);
	std::cout << c2.Min() << std::endl;

	Compare<double, double> c3(34.263, 30.112);
	std::cout << c3.Min() << std::endl;

	Compare<int, float> c4(10, 8.634f);
	std::cout << c4.Min() << std::endl;

	Compare<double, int> c5(8.2313, 8);
	std::cout << c5.Min() << std::endl;

	Compare<float, double> c6(10.23f, 8.2345);
	std::cout << c6.Min() << std::endl;



	return 0;
}