//RUA que dado el mes muestre el signo sodiacal
#include <iostream>
using namespace std;
int dia;
int mes;
string validacion() {
 // Aries : 21 de marzo – 19 de abril
 if ((mes == 3 && dia >= 21 && dia <= 31) || (mes == 4 && dia >= 1 && dia <= 19)) {
        return "Usted es Aries.";
 }
// Tauro : 20 de abril – 20 de mayo
 else if ((mes == 4 && dia >= 20 && dia <= 30) || (mes == 5 && dia >= 1 && dia <= 20)) {
        return "Usted es Tauro.";
 }
 // Géminis : 21 de mayo – 20 de junio
 else if ((mes == 5 && dia >= 21 && dia <= 31) || (mes == 6 && dia >= 1 && dia <= 20)) {
        return "Usted es Geminis.";
 }
 // Cáncer : 21 de junio – 22 de julio
 else if ((mes == 6 && dia >= 21 && dia <= 30) || (mes == 7 && dia >= 1 && dia <= 22)) {
        return "Usted es Cancer.";
 }
 // Leo : 23 de julio – 22 de agosto
 else if ((mes == 7 && dia >= 23 && dia <= 31) || (mes == 8 && dia >= 1 && dia <= 22)) {
        return "Usted es Leo.";
 }
 // Virgo : 23 de agosto – 22 de septiembre
 else if ((mes == 8 && dia >= 23 && dia <= 31) || (mes == 9 && dia >= 1 && dia <= 22)) {
        return "Usted es Virgo.";
 }
 // Libra : 23 de septiembre – 22 de octubre
 else if ((mes == 9 && dia >= 23 && dia <= 30) || (mes == 10 && dia >= 1 && dia <= 22)) {
        return "Usted es Libra.";
 }
 // Escorpio : 23 de octubre – 21 de noviembre
 else if ((mes == 10 && dia >= 23 && dia <= 31) || (mes == 11 && dia >= 1 && dia <= 21)) {
        return "Usted es Escorpio.";
 }
 // Sagitario : 22 de noviembre – 21 de diciembre
 else if ((mes == 11 && dia >= 22 && dia <= 30) || (mes == 12 && dia >= 1 && dia <= 21)) {
        return "Usted es Sagitario.";
 }
 // Capricornio : 22 de diciembre – 19 de enero
 else if ((mes == 12 && dia >= 22 && dia <= 31) || (mes == 1 && dia >= 1 && dia <= 19)) {
        return "Usted es Capricornio.";
 }
 // Acuario : 20 de enero – 18 de febrero
 else if ((mes == 1 && dia >= 20 && dia <= 31) || (mes == 2 && dia >= 1 && dia <= 18)) {
        return "Usted es Acuario.";
 }
 // Piscis : 19 de febrero – 20 de marzo
 else if ((mes == 2 && dia >= 19 && dia <= 29) || (mes == 3 && dia >= 1 && dia <= 20)) {
        return "Usted es Piscis.";
 }
 else {
    return "Fecha no valida.";
    }
}
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
