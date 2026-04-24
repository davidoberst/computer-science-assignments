//RUA que dado un número del 1 al 12 muestre en pantalla en mes correspondiente del año.
#include <iostream>
using namespace std;
int main() {
float n;
string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

while(true){
cout << "Ingresa el numero del año : ";
if (!(cin >> n)) {
    cout << "Error:Eso no es un numero" << endl;
    break;
}

int convert_array_to_int = int(n);
if(convert_array_to_int < 1 || convert_array_to_int > 12 ){ 
    cout << "Rango de mes del año inexistente.";cout<< endl;
    
}else{
    
    cout<<meses[convert_array_to_int -1 ]; cout<< endl;
}
   
 }
  return 0;
}
