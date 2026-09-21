#include <iostream>
#include <vector>

int main() {
	int D, n;
	std::cin >> D >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) 
		std::cin >> a[i];
	int nacinjenaSteta = 0;
	bool zidineProbijene = false;
	for (int i = 0; i < n; i++) {
		nacinjenaSteta += a[i];
		if (nacinjenaSteta >= D) {
			std::cout << "Zidine su probijene " << i + 1 << ". dana";
			zidineProbijene = true;
			break;
		}
	}
	if (!zidineProbijene) {
		std::cout << "Zidine nisu probijene" << std::endl;
	}
	return 0;
}
