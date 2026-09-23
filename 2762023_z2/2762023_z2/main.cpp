#include <iostream>

int main() {
	int n; std::cin >> n;
	// x + x + x + (x + 3) = 4x + 3
	if (n % 4 == 3) std::cout << "da" << std::endl;
	else std::cout << "ne" << std::endl;
	return 0;
}