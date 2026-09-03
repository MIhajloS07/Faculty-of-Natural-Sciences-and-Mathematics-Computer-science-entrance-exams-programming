#include <iostream>
#include <cmath>
using namespace std;

bool prost(int n) {
	if (n <= 1) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) return false;
	}
	return true;
}

int main(void) {
	int n; cin >> n;

	int dole = n - 1;
	while (dole > 1 && !prost(dole)) dole--;

	int gore = n + 1;
	while (!prost(gore)) gore++;

	int distDole = n - dole;
	int distGore = gore - n;

	if (distDole < distGore) {
		cout << dole << endl;
	}
	else if (distDole > distGore) {
		cout << gore << endl;
	}
	else {
		cout << dole << " " << gore << endl;
	}
	return 0;
}