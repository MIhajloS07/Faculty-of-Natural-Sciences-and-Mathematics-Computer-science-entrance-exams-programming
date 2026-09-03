#include <iostream>

long long faktorijel(long long n) {
	if (n == 0 || n == 1) return 1;
	return n * faktorijel(n - 1);
}

int main(void) {
	int n; std::cin >> n;
	long long suma = 0;
	for (int i = 1; i <= n; i++) {
		int broj = 3 * i;
		long long clan = faktorijel(broj);
		if ((i + 1) % 2 == 0) clan *= -1;
		suma += clan;
	}
	std::cout << suma << std::endl;
	return 0;
}