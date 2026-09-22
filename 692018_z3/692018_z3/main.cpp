#include <iostream>
#include <vector>

int main() {
	int n; std::cin >> n;
	std::vector<int> niz(n);
	for (int i = 0; i < n; i++) std::cin >> niz[i];

	int min = niz[0], brojmin = 0;
	for (int i = 0; i < niz.size(); i++) {
		if (niz[i] == min) brojmin++;
		else if (niz[i] < min) {
			min = niz[i];
			brojmin = 1;
		}
	}
	std::cout << brojmin;
	return 0;
}