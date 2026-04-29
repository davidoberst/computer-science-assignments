// 46. Euros a Dólares
#include <iostream>
using namespace std;

int main() {
    float euros, tasa, dolares;
    cout << "Euros: ";
    cin >> euros;
    cout << "Tasa de cambio (1 EUR a USD): ";
    cin >> tasa;
    dolares = euros * tasa;
    cout << "Dolares: " << dolares << endl;
    return 0;
}
