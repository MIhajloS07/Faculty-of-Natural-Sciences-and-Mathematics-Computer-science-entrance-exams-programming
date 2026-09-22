#include <iostream>
#include <vector>

int main() {
	int n, x, t; std::cin >> n;
	std::vector<int> ulaznice(n);
	for (int i = 0; i < n; i++) std::cin >> ulaznice[i];
	std::cin >> x >> t;
	int i = 0, br = 0;
	while (i < t && i < n) 		
		br += ulaznice[i++];
	std::cout << "bice zaradjeno " << br * x << " dinara" << std::endl;
	return 0;
}