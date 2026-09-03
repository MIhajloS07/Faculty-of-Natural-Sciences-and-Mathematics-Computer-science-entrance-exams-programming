#include <iostream>
using namespace std;

int broj_jedinica(int broj);

int main(void) {
	int a, b; cin >> a >> b;
	if (broj_jedinica(a) > broj_jedinica(b)) cout << "a ima vise jedinica od b" << endl;
	else cout << "b ima vise jedinica od a";
	return 0;
}

int broj_jedinica(int broj) {
	broj = llabs(broj);
	int brojac = 0;
	while (broj > 0) {
		if (broj % 2 == 1) brojac++;
		broj /= 2;
	}
	return brojac;
}