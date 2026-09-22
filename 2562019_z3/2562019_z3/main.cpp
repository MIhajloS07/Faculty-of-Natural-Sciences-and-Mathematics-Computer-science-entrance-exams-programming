#include <iostream>

bool palindrom(int* x) {
	int y = *x, z = 0;
	while (y) {
		z = 10 * z + y % 10;
		y /= 10;
	}
	return z == *x;
}

int main(){
	for (int a = 10; a < 100; a++) {
		for (int b = 10; b < 100; b++) {
			int proizvod = a * b;
			if (palindrom(&proizvod))
				std::cout << a << " ," << b << std::endl;
		}
	}
	return 0;
}