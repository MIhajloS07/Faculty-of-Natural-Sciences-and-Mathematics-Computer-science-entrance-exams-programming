#include <iostream>
#include <algorithm>

int izracunaj(int* c1, int* p1, int* c2, int* p2) {
	return std::min(*c1 + *p2, *c2 + *p1);
}

int main() {
	int a, b, c, d; std::cin >> a >> b >> c >> d;
	int vrednost = izracunaj(&a, &b, &c, &d);
	std::cout << vrednost << std::endl;
	return 0;
}