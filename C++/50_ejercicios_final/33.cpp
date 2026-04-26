//33. Escribir un programa que convierta un valor dado en grados Fahrenheit a grados Celsius.
#include <iostream>
using namespace std;
double grados;
double calculo(){
    return (grados - 32.0) *5.0/9.0;
}
int main() {
    cout << "Inserte grados Fahrenheit  : ";
    cin >> grados;
    cout << "Resultado en grados Celsius :"<<calculo();
    return 0;
}
