#include <iostream>

int faktorijel(int* n) {
	if (*n == 1) return 1;
	int prethodni = *n - 1;
	return *n * faktorijel(&prethodni);
}

int main() {
	int N; std::cin >> N;
	int suma = 0;
	for (int i = 1; i <= N; i += 2) {
		suma += faktorijel(&i);
	}
	std::cout << suma << std::endl;
	return 0;
}