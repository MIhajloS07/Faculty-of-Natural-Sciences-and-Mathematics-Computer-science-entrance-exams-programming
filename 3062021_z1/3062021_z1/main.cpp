#include <iostream>

#define pocetak 100
#define kraj 1000

int sumaSvihTrocifrenih(int* n) {
	int suma = 0;
	for (int i = pocetak; i < kraj; i++) {
		short drugaCifra = (i / 10) % 10;
		if ((int)drugaCifra  > *n)
			suma += i;
	}
	return suma;
}

int main(void) {
	int n; std::cin >> n;
	if (n < 0 || n > 9) return 1;
	int suma = sumaSvihTrocifrenih(&n);
	std::cout << "suma svih trocifrenih cija je druga cifra veca od n: " << suma << std::endl;
	return 0;
}