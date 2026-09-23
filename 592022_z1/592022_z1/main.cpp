#include <iostream>

int main(void) {
	int trenutnaVrednost;
	int suma = 0;
	size_t brojUnosa = 0;
	while (suma <= 100) {
		std::cin >> trenutnaVrednost;
		suma += trenutnaVrednost;
		++brojUnosa;
	}
	std::cout << "Uneto " << brojUnosa << " brojeva" << std::endl;
	std::cout << "Ukupna suma: " << suma << std::endl;
	return 0;
}