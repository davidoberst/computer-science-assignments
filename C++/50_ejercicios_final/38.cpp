//38. Leer 3 edades, e imprimirlas junto con el promedio

#include <iostream>
using namespace std;
int main() {
    int e1;
    int e2;
    int e3;
    cout << "Edad 1 : ";
    cin >> e1;
    cout << "Edad 2 : ";
    cin >> e2;
    cout << "Edad 3 : ";
    cin >> e3;
    int promedio = (e1+e2+e3)/3;
    cout <<"el promedio es "<<promedio;
    return 0;
 }
    
