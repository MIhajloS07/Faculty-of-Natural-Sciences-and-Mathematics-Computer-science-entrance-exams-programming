#include <iostream>
using namespace std;

int main(void) {
	int M, N;
	cin >> M >> N;
	if (M > N) {
		cout << "Greska: M mora biti manje ili jednako N" << endl;
		return 1;
	}
	// suma kvadrata svih parnih brojeva koji se nalaze u intervalu [M, N]
	int suma = 0;
	while (M <= N) {
		if (M % 2 == 0) {
			suma += (M * M);
		}
		M++;
	}
	cout << suma << endl;
	return 0;
}