#include <iostream>
#include <vector>

int main(void) {
	int n; std::cin >> n;
	std::vector<int> h(n);
	
	for (int i = 0; i < n; i++) std::cin >> h[i];

	int max_vidi = -1;
	int indeks = -1;

	for (int i = 0; i < h.size(); i++) {
		int brojLjudi = 0;
		for (int j = i + 1; j < h.size(); j++) {
			if (h[j] < h[i]) brojLjudi++;
			else break;
		}
		if (brojLjudi >= max_vidi) {
			max_vidi = brojLjudi;
			indeks = i + 1;
		}
	}
	std::cout << indeks << std::endl;
	return 0;
}