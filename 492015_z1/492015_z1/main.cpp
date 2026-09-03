#include <iostream>
using namespace std;

int main(void) {
	int k; cin >> k;
	bool nasao = false;
	for (int x = 100; x < 999; x++) {
		int a = x / 100;
		int b = (x / 10) % 10;
		int c = x % 10;
		int suma = a + b + c;
		int proizvod = a * b * c;

		if (proizvod - suma == k) {
			cout << x << endl;
			nasao = true;
		}
	}
	if (!nasao) {
		cout << "Nema resenja" << endl;
	}
	return 0;
}