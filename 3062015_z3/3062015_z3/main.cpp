#include <iostream>
#include <vector>
using namespace std;

bool daLiJeStepenDrugi(long long n) {
	return n > 0 && (n & (n - 1)) == 0;
}

int main(void) {
	int n; cin >> n;
	vector<long long> a(n), b(n);
	for (int i = 0; i < n; i++) cin >> a[i];		
	for (int i = 0; i < n; i++) cin >> b[i];
	size_t broj_pozicija_deljivosti = 0, broj_pozicija_stepena = 0;
	for (size_t i = 0; i < a.size(); i++) {
		long long s = a[i] + b[i];
		if (s % 2 == 0) ++broj_pozicija_deljivosti;
		if (daLiJeStepenDrugi(s)) ++broj_pozicija_stepena;
	}
	cout << broj_pozicija_deljivosti << " " << broj_pozicija_stepena << endl;
	return 0;
}