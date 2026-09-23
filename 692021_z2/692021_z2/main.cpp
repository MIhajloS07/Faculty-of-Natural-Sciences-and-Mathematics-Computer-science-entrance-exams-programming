#include <iostream>

int main() {
	int n, m; std::cin >> n >> m;
	double s = 0., z = 1.;
	for (int i = 1; i <= m; i++) {
		s += z / (n + i * m);
		z = -z;
	}
	std::cout << s << std::endl;
	return 0;
}