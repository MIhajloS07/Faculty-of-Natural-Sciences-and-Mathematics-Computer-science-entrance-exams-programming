#include <iostream>
#include <vector>

int izracunaj(std::vector<int>* a) {
	int n = a->size(), z = (n + 1) * (n + 2) / 2;
	for (int x : *a)
		z -= x;
	return z;
}

int main() {
	int n; std::cin >> n;
	std::vector<int> niz(n);
	for (int i = 0; i < n; i++)
		std::cin >> niz[i];
	int vrednost = izracunaj(&niz);
	std::cout << vrednost << std::endl;
	return 0;
}