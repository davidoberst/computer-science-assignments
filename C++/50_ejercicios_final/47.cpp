// 47. Dólares a Euros
#include <iostream>
using namespace std;

int main() {
    float dolares, tasa, euros;
    cout << "Dolares: ";
    cin >> dolares;
    cout << "Tasa de cambio (1 USD a EUR): ";
    cin >> tasa;
    euros = dolares * tasa;
    cout << "Euros: " << euros << endl;
    return 0;
}
