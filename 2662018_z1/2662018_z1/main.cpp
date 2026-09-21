#include <iostream>

int sumaKvadrataCifara(const int* br) {
	int broj = *br;
	int cifra, suma = 0;
	while (broj > 0) {
		cifra = broj % 10;
		suma += cifra * cifra;
		broj /= 10;
	}
	return suma;
}

int main() {
	int n; std::cin >> n;

	if (n > sumaKvadrataCifara(&n)) {
		std::cout << n << " je veci od sume kvadrata svojih cifara";
	}
	else {
		std::cout << n << " nije veci od sume kvadrata svojih cifara";
	}
	return 0;
}