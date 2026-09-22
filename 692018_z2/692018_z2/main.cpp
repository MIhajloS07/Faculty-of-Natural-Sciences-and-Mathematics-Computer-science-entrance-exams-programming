#include <iostream>

int main() {
	for (int i = 100; i < 1000; i++) {
		int c = i % 10;
		int b = (i / 10) % 10;
		int a = i / 100;
		if (i == a * a * a + b * b * b + c * c * c) std::cout << i << std::endl;
	}
	return 0;
}