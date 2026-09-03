#include <iostream>
using namespace std;

int main() {
    int broj; cin >> broj;
    int n = abs(broj);
    if (n < 100 || n > 999) {
        cout << "NE" << endl;
        return 0;
    }
    int cifra_stotina = n / 100;
    int cifra_desetica = (n / 10) % 10;
    int cifra_jedinica = n % 10;
    if (cifra_desetica == cifra_stotina + cifra_jedinica) {
        cout << "DA" << endl;
    }
    else {
        cout << "NE" << endl;
    }
    return 0;
}
