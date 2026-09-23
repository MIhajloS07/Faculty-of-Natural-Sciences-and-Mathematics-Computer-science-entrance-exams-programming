#include <iostream>
#include <vector>

#define gornjiPragVisine 150
#define donjiPragVisine 5

int main() {
	int n; std::cin >> n;
	std::vector<int> t(n);
	for (int i = 0; i < n; i++) std::cin >> t[i];
	int min = t[0], max = t[0];
	for (int i = 1; i < t.size(); i++) {
		if (t[i] > max) max = t[i];
		if (t[i] < min) min = t[i];
	}
	if (max - min > gornjiPragVisine || max - min < donjiPragVisine) std::cout << "Nepovoljno" << std::endl;
	else std::cout << "Povoljno" << std::endl;
	return 0;
}