//48. RUA que lea dos deportes y muestre los implementos utilizados en cada deporte

#include <iostream>
#include <string>
using namespace std;

int main() {
    string deporte1, deporte2;

    cout << "Ingrese el primer deporte (futbol, tenis, boxeo, natacion): ";
    cin >> deporte1;
    cout << "Ingrese el segundo deporte (futbol, tenis, boxeo, natacion): ";
    cin >> deporte2;

    cout << endl << "Implementos necesarios:" << endl;
     
     //PRIMER DEPORTE 
    if (deporte1 == "futbol") cout << "- Futbol: Balon, guayos, canilleras." << endl;
    else if (deporte1 == "tenis") cout << "- Tenis: Raqueta, pelotas, malla." << endl;
    else if (deporte1 == "boxeo") cout << "- Boxeo: Guantes, vendajes, protector bucal." << endl;
    else if (deporte1 == "natacion") cout << "- Natacion: Gorro, gafas, bañador." << endl;
    else cout << "- " << deporte1 << ": Deporte no registrado." << endl;

    // SEG DEPORTE
    if (deporte2 == "futbol") cout << "- Futbol: Balon, guayos, canilleras." << endl;
    else if (deporte2 == "tenis") cout << "- Tenis: Raqueta, pelotas, malla." << endl;
    else if (deporte2 == "boxeo") cout << "- Boxeo: Guantes, vendajes, protector bucal." << endl;
    else if (deporte2 == "natacion") cout << "- Natacion: Gorro, gafas, bañador." << endl;
    else cout << "- " << deporte2 << ": Deporte no registrado." << endl;

    return 0;
}
