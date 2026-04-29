// 43. Calcular el máximo común divisor de 2 números naturales, distintos de 0.
#include <iostream>

using namespace std;

int main() {
    int a, b, residuo;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    int num1 = a;
    int num2 = b;

    while (b != 0) {
        residuo = a % b;
        a = b;
        b = residuo;
    }
    cout << "El MCD de " << num1 << " y " << num2 << " es: " << a << endl;

    return 0;
}
