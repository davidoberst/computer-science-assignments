//35. RUA que lea 3 notas donde la primera nota equivale al 30%, la segunda al 30% y la tercera
//(N1⋅0.30)+(N2⋅0.30)+(N3⋅0.40)
//la nota va de (1 a 5)y calcule la nota final o definitiva.

#include <iostream>
using namespace std;
double n1;
double n2;
double n3;
int main() {
    cout << "Nota 1 : ";
    cin >> n1;
    cout << "Nota 2 : ";
    cin >> n2;
    cout << "Nota 3 : ";
    cin >> n3;
//calculo
    double nfinal = ((n1 * 0.30) + (n2 * 0.30) + (n3 * 0.40));
    cout <<"Nota Final : " <<nfinal;
    return 0;
}
