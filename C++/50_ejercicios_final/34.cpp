// 34. Convertir de grados Celsius a Fahrenheit
#include <iostream>
using namespace std;

double grados;

double calculo(){
    return (grados * 9.0/5.0) + 32.0;
}

int main() {
    cout << "Inserte grados Celsius : ";
    cin >> grados;
    cout << "Resultado en grados Fahrenheit : " << calculo();
    return 0;
}
