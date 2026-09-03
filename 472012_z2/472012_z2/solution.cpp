#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<int> a(n), b(k);	
	for (int i = 0; i < n; i++) {
		cin >> a[i];	
	}
	for (int i = 0; i < k; i++) {
		cin >> b[i];
	}
	bool pronadjen = false;
	for (int s = 1; s <= n - k; s++) {
		bool poklapa = true;
		for (int j = 0; j < k; j++) {
			if (a[s + j] != b[j]) {
				poklapa = false;
				break;
			}
			if (poklapa) {
				pronadjen = true;
				break;
			}
		}
	}
	if (pronadjen)
		cout << "Niz b je podniz niza a." << endl;
	else
		cout << "Niz b nije podniz niza a." << endl;
	return 0;
}