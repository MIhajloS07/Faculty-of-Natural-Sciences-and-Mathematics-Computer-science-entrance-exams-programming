#include <iostream>

bool palindrom(int broj) {
	int original = broj;
	int okrenut = 0;
	while (broj != 0) {
		okrenut = okrenut * 10 + broj % 10;
		broj /= 10;
	}
	return okrenut == original;
}

int main() {
	int broj; std::cin >> broj;
	if (palindrom(broj)) {
		std::cout << "Broj je palindrom" << std::endl;
	}
	else {
		std::cout << "Broj nije palindrom" << std::endl;
	}
	return 0;
}