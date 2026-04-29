// 45. Dólares a Pesos
#include <iostream>
using namespace std;

int main() {
    float dolares, tasa, pesos;
    cout << "Dolares: ";
    cin >> dolares;
    cout << "Tasa de cambio (1 USD a COP): ";
    cin >> tasa;
    pesos = dolares * tasa;
    cout << "Pesos: " << pesos << endl;
    return 0;
}
