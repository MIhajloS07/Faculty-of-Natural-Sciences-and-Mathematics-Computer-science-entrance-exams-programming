#include <iostream>
#include <vector>

struct Par {
	int a, b;
};

int main(void) {
	int n; std::cin >> n;
	std::vector<Par> niz(n);
	for (int i = 0; i < n; i++) std::cin >> niz[i].a >> niz[i].b;
	for (int i = 0; i < n; i++) {
		bool postojiManji = false;
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if (i != j && niz[j].a < niz[i].a && niz[j].b < niz[i].b) {
				postojiManji = true;
				break;
			}
		}
		if (!postojiManji) std::cout << niz[i].a << " " << niz[i].b << std::endl;
	}
	return 0;
}