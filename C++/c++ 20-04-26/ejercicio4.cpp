// 4 : Pesos a dolares
#include <iostream>
using namespace std;
int main() {
int pesos;
float tasa_de_cambio = 4000;
cout << "Ingrese el valor de pesos : ";
cin >> pesos; 

//operacion
float resultado = pesos / tasa_de_cambio;
cout << resultado<<" Dolares.";

    return 0;
}
