#include <iostream>
#include <vector>
#include <algorithm>

bool pripada(double segment_a, double segment_b, double vrednost) {
	double pocetak = std::min(segment_a, segment_b);
	double kraj = std::max(segment_a, segment_b);
	return vrednost >= pocetak && vrednost <= kraj;
}

int main() {
	int n; double x, y; 
	std::cin >> n;
	std::vector<int> a(n);
	std::vector<int> b(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		std::cin >> b[i];
	}
	std::cin >> x >> y;
	size_t brojac = 0;
	for (int i = 0; i < n; i++) {
		if (pripada(a[i], b[i], x) && !pripada(a[i], b[i], y) ||
			!pripada(a[i], b[i], x) && pripada(a[i], b[i], y)) {
			++brojac;
		}
	}
	std::cout << "Ukupan broj segmenata koji zadovoljavaju uslove zadatka: " << brojac << std::endl;
	return 0;
}