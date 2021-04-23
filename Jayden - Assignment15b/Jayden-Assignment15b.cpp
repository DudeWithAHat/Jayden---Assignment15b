#include "StandardHFile.h"

//Jayden Campbell
// CIS 1202
//April 22, 2021

template <class T>
T half(T value) {
	value /= 2;
	return value;
}

template<>
int half<int>(int value) {
	value = round(static_cast<float>(value) / 2);
	return value;
}

int main() {
	double a = 7.0;
	float b = 5.0;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	leave();
}



