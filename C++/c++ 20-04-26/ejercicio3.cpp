#include <iostream>
using namespace std;
int main() {
float nota1; float nota2; float nota3;
cout << "Ingrese la nota 1 : "; cin >> nota1; //30%
cout << "Ingrese la nota 2 : "; cin >> nota2; //30%
cout << "Ingrese la nota 3 : "; cin >> nota3; //40%

//calculo de notas
float notaFinal = (nota1*0.30) + (nota2 * 0.30) + (nota3 * 0.40);
cout << "La nota final es : " << notaFinal;
    return 0;
}
