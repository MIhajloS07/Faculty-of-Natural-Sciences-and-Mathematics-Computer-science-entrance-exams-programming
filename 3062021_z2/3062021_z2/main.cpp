#include <iostream>

int main() {
	double cenaHlebaPrviMesec; std::cin >> cenaHlebaPrviMesec;
	for (int i = 0; i < 5; i++) 
		cenaHlebaPrviMesec *= 1.1;
	std::cout << cenaHlebaPrviMesec << std::endl;
	return 0;
}