//50. Calcular el sueldo mensual de un empleado que trabaja por horas, el pago de cada hora
trabajada depende de su categoría:
#include <iostream>
using namespace std;
int main() {
    double pago;
    int horas;
    string categoria;
    cout << "Ingrese su categoria : ";
    cin >> categoria;
    if(categoria == "A" || categoria == "a" ){
      pago = 26.90;
      cout << "Cantidad de horas trabajadas : ";
      cin >> horas;
      cout << "Su pago es : "<<pago * horas;
    }else if(categoria == "B" || categoria == "b"){
        pago = 24.30;
        cout << "Cantidad de horas trabajadas : ";
        cin >> horas;
        cout << "Su pago es : "<<pago * horas;
    }
    else if(categoria == "C"  || categoria == "c"){
        pago = 21.5;
        cout << "Cantidad de horas trabajadas : ";
        cin >> horas;
        cout << "Su pago es : "<<pago * horas;
    }else{
        cout<<"Categoria no valida.";
    }
    return 0;
}
