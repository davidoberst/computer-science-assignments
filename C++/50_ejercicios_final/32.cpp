//32. Dados los catetos de un triángulo rectángulo, calcular su hipotenusa.
//raíz cuadrada de la suma de los cuadrados de los catetos.
#include <iostream>
#include <cmath>
using namespace std;
double cat1;
double cat2;
double H(){
    double raiz_c = sqrt(cat1 * cat1 + cat2 * cat2);
    return raiz_c;
}
int main() {
   cout << "Cateto 1 : ";
   cin >> cat1;
   cout << "Cateto 2 : ";
   cin >> cat2;
   cout<<"La hipotenusa es : "<<H();
    return 0;
}
