#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n; cin >> n;
	vector<int> h(n);
	for (int i = 0; i < n; i++) 
		cin >> h[i];
	size_t broj_vidjenih = 0;
	int max_visina = 0;
	for (int i = 0; i < h.size(); i++) {
		if (h[i] > max_visina) {
			broj_vidjenih++;
			max_visina = h[i];
		}
	}
	cout << broj_vidjenih << endl;
	return 0;
}