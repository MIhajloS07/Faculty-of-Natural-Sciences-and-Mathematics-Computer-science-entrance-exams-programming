#include <iostream>

int main() {
	int X, Y, Z;
    for (X = 1; X <= 9; X++) {
        for (Y = 0; Y <= 9; Y++) {
            for (Z = 0; Z <= 9; Z++) {
                int XY = X * 10 + Y;
                int XYZ = X * 100 + Y * 10 + Z;
                int osobina = XY * XY - Z * Z;
                if (XYZ == osobina) {
                    std::cout << XYZ << std::endl;
                }
            }
        }
    }
	return 0;
}