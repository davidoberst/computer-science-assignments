//49. RUA que lea un valor dado en libras y convertirlos a kilogramos

#include <iostream>
using namespace std;

int main() {
    float libras, kilogramos;
    cout << "Ingrese el valor en libras: ";
    cin >> libras;
    kilogramos = libras * 0.453592;
    cout << "El valor en kilogramos es: " << kilogramos << endl;
    return 0;
}
