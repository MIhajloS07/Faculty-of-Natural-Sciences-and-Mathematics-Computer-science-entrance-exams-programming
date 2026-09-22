#include <iostream>

int main(void) {
	float x, y, z;
	std::cin >> x >> y >> z;
	if (x >= y && y >= z) {
		x *= 2; y *= 2; z *= 2;
	}
	else {
		x = -x; y = -y; z = -z;
	}
	std::cout << x << " ," << y << " ," << z << std::endl;
	return 0;
}