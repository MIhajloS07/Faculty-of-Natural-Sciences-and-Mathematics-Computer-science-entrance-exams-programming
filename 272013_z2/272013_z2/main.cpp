#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
	int n, brojac = 0, suma = 0;
	cin >> n;
	vector<int> niz(n);
	for (int i = 0; i < n; i++) {
		cin >> niz[i];
		suma += niz[i];
	}
	double srednja_vrednost = (double)suma / n;

	int indeks = 0;
	double min_razlika = fabs(niz[0] - srednja_vrednost); 

	for (int i = 1; i < n; i++) {
		double razlika = fabs(niz[i] - srednja_vrednost);
		if (razlika < min_razlika) {
			min_razlika = razlika;
			indeks = i;
		}
	}

	cout << "Indeks elementa najblizeg srednjoj vrednosti: " << indeks << endl;
	cout << "Element najblizi srednjoj vrednosti: " << niz[indeks] << endl;

	return 0;
}