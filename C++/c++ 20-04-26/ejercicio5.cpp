#include <iostream>
using namespace std;

int main() {
    int edad1;
    int edad2;
    int edad3;
    cout << "Ingrese edad 1 : ";
    cin >> edad1;
    cout << "Ingrese edad 2 : ";
    cin >> edad2;
    cout << "Ingrese edad 3 : ";
    cin >> edad3;
    // calcular promedio
    float promedio = (edad1 + edad2 + edad3) / 3.0;

    cout << "El promedio es : " << promedio;

    return 0;
}
