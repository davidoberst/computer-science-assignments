
//imprima un numero y diga si es mayor menor o igual a 0

#include <iostream>
using namespace std;
int main(){
    int calificacion ;
    cout<<"Ingrese su calificacion : ";
    cin >> calificacion;
    if(calificacion < 6){
        cout << "reprobado";
     }else if(calificacion <=6 || calificacion < 7){
         cout << "suficiente";
      }else if(calificacion <=7 || calificacion < 8){
          cout << "bien";
       }else if(calificacion <=8 || calificacion < 9 ){
           cout << "muy bien";
         }else if(calificacion <= 9 || calificacion <=10){
            cout << "excelente";
    }
    return 0;
}
