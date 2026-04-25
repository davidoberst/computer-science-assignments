//RUA que dado el mes muestre el signo sodiacal
#include <iostream>
using namespace std;
int dia;
int mes;
string validacion(){
  //Aries : 21 de marzo – 19 de abril
  if( (dia>=21 && mes == 3 && dia<=31 && mes == 3) || (dia>=19 && mes == 4 ) ){
     return "Usted es Aries.";
     cout<<endl;
 }
} //end validacion_function

int main() {
 while(true){
    //user inputs 
    cout<<endl;
    cout<<"Dia de Nacimiento: ";
    cin>>dia;
    cout<<"Mes de Nacimiento: ";
    cin>>mes;
    cout << validacion();
} //end while
  return 0;
}
