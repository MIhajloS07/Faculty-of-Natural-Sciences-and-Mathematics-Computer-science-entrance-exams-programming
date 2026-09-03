#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	int n; cin >> n;
	long double S = 0.0L;
	for (int i = 1; i <= n; i++) {
		int part = n - i + 1;
		S += (long double)(2 * i + 1) / ((long double)part * (long double)part);
	}
	cout << fixed << setprecision(6) << (double)S << '\n';
	return 0;
}