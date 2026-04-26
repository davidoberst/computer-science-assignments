//36. RUA que lea 4 notas donde la primera nota equivale al 20%, la segunda al 20%, la tercera al 10% y la cuarta al 50% la nota va de (1 a 5)y calcule la nota final o definitiva.

#include <iostream>
using namespace std;

double n1;
double n2;
double n3;
double n4;

int main() {
    cout << "Nota 1 : ";
    cin >> n1;
    cout << "Nota 2 : ";
    cin >> n2;
    cout << "Nota 3 : ";
    cin >> n3;
    cout << "Nota 4 : ";
    cin >> n4;

    //calculo
    double nfinal = ((n1 * 0.20) + (n2 * 0.20) + (n3 * 0.10) + (n4 * 0.50));

    cout << "Nota Final : " << nfinal;
    return 0;
}
