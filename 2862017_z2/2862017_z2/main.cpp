#include <iostream>
#include <vector>

int main() {
	int n; std::cin >> n;
	std::vector<int> niz(n);
	int sumaNaParnim = 0, sumaNaNeparnim = 0;
	for (int i = 0; i < n; i++) std::cin >> niz[i];
	for (int i = 0; i < niz.size(); i+=2) 
		if (!(niz[i] % 2)) sumaNaParnim += niz[i];
	for (int i = 1; i < niz.size(); i += 2) 
		if (niz[i] % 2) 
				sumaNaNeparnim += niz[i];
	int razlika = sumaNaParnim - sumaNaNeparnim;
	std::cout << "Trazena razlika: " << razlika << std::endl;
	return 0;
}