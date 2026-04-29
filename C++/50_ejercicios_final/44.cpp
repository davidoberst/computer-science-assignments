// 44. Pesos a Dólares
#include <iostream>
using namespace std;
int main() {
    float pesos, tasa, dolares;
    cout << "Pesos: ";
    cin >> pesos;
    cout << "Tasa de cambio (1 USD a COP): ";
    cin >> tasa;
    dolares = pesos / tasa;
    cout << "Dolares: " << dolares << endl;
    return 0;
}
