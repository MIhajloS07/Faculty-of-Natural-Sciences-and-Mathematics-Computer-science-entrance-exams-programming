#include <iostream>

bool prestupnaGodina(int godina){
	return (godina % 4 == 0 && godina % 100 != 0) || (godina % 400 == 0);
}

int main() {
	int godina; std::cin >> godina;
	size_t brojac = 0;
	while (brojac < 5) {
		if (prestupnaGodina(godina)) {
			std::cout << godina << std::endl;
			brojac++;
		}
		godina++;
	}
	return 0;
}