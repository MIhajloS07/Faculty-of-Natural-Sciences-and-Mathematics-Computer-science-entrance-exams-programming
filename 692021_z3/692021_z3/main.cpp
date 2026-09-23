#include <iostream>
#include <vector>

int main() {
	int n; std::cin >> n;
	std::vector<int> temperature(n);
	for (int i = 0; i < n; i++) std::cin >> temperature[i];
	int max = -100, min = 100;
	for (int i = 0; i < temperature.size(); i++) {
		if (temperature[i] > max) max = temperature[i];
		if (temperature[i] < min) min = temperature[i];
	}
	if (max - min > 30 || max - min < 5) std::cout << "Nepovoljan dan za meteoropate" << std::endl;
	else std::cout << "Povoljan dan za meteoropate" << std::endl;
	return 0;
}