#include <iostream>

int main() {
	int a, b; std::cin >> a >> b;
	int hipotenuzaC = (a * a) + (b * b);
	std::cout << "Hipotenuza je duzine: " << hipotenuzaC << std::endl;
	return 0;
}