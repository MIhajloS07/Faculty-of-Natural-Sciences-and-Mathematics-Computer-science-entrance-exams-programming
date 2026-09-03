#include <iostream>

int main(void) {
	int n; // prirodan broj
	std::cin >> n;
	double suma = 0.0;
	for (int i = 1; i <= n; i++) {
		int k = 2 * i + 1;
		suma += 1.0 / (k * k);
	}
	std::cout << suma << std::endl;
	return 0;
}