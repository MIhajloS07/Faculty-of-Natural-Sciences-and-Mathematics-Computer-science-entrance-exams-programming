#include <iostream>
#include <vector>

int main() {
	int n; std::cin >> n;
	if (n < 1 || n > 1000) return 1;
	std::vector<int> niz(n);
	for (int i = 0; i < n; i++) std::cin >> niz[i];
	int suma = 0;
	for (int i = 0; i < niz.size(); i++){
		if (niz[i] >= 20 && niz[i] <= 70) {
			suma += niz[i];
		}
	}
	std::cout << suma << std::endl;
	return 0;
}