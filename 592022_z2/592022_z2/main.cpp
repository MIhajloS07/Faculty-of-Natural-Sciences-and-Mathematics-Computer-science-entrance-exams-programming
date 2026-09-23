#include <iostream>

bool prestupna(int* godina) {
	return *godina % 400 == 0 || (*godina % 4 == 0 && *godina % 100 != 0);
}

int main() {
	int godina; std::cin >> godina;
	do {
		godina++;
	} while (!prestupna(&godina));
	std::cout << "Sledeca prestupna godina: " << godina << std::endl;
	return 0;
}