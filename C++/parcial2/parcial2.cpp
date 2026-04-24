//PARCIAL II
#include <iostream>
using namespace std;

//VARIABLES

float hemoglobina;
string sexo;
int edad;

//FUNCIONES DE CALCULO
string calculo_hombre(){
    if(hemoglobina >= 13.8 && hemoglobina <= 17.2 ){
        return  "Usted no tiene anemia (:";
    }else{
        return  "usted tiene anemia :(";
    }
}
string calculo_mujer(){
    if(hemoglobina >= 12.1 && hemoglobina <= 15.1 ){
        return  "Usted no tiene anemia (:";
    }else{
        return  "usted tiene anemia :(";
    }
}

string calculo_niños(){
    if(hemoglobina >= 9.5 && hemoglobina <= 14 ){
        return  "Usted no tiene anemia (:";
    }else{
        return  "usted tiene anemia :(";
    }
}

string calculo_adultos_mayores(){
    if(hemoglobina >= 11 && hemoglobina <= 17.2 ){
        return  "Usted no tiene anemia (:";
    }else{
        return  "usted tiene anemia :(";
    }
}

string calculo_jovenes(){
    if(hemoglobina >= 10 && hemoglobina <= 15.5 ){
        return  "Usted no tiene anemia (:";
    }else{
        return  "usted tiene anemia :(";
    }
}

//RETORNO DE FUNCIONES

int main() {
 while (true){
    cout << endl;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "cual es su sexo?: ";
    cin >> sexo;
    cout << "Ingrese su nivel de emoglobina: ";
    cin >> hemoglobina;
    if(edad >= 18 && edad <= 64 && sexo == "hombre"){
     cout << calculo_hombre();   
     cout << endl;
    }else if (edad >= 18 && edad <=64 && sexo == "mujer"){
     cout << calculo_mujer();
     cout << endl;
    }else if (edad >= 1 && edad <=6){
     cout << calculo_niños();
     cout << endl;
    }else if(edad >= 65){
       cout << calculo_adultos_mayores(); 
       cout << endl;
    }else if(edad >6 && edad <=17){
       cout << calculo_jovenes();
       cout << endl;
  }else{
      cout << "Algun valor  fue digitado erroneamente, intente de nuevo...";
      break;
  }
 
 }
 return 0;
}
