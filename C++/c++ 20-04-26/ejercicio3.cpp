//PESOS A EUROS

#include <iostream>
using namespace std;

int main() {
    float pesos; 
    float tasa_euro = 4350; 
    float resultado;

    cout << "Ingrese el valor en pesos: ";
    cin >> pesos; 

    // Operación
    resultado = pesos / tasa_euro;

    cout << "El equivalente es: " << resultado << " Euros." << endl;

    return 0;
}
