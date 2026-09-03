#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int A, B, C;
	cin >> A >> B >> C;
	int max_molekula = min({ A / 2, B, C / 4 });
	cout << "Maksimalan broj molekula: " << max_molekula << endl;
	return 0;
}