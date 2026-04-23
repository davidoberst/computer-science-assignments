#include <iostream>
using namespace std;
int main() {
  float n1,n2,n3;
  cout << "ingrese nota1 : "; cin >> n1;
  cout << "ingrese nota2 : "; cin >> n2;
  cout << "ingrese nota3 : "; cin >> n3;
  
  //sacar promedio 
  float promedio = (n1 + n2 + n3) /3;
  if(promedio > 3){
    cout << "aprobado!";  
  }else{
      cout << "reprobado!";
  }
  
    return 0;
    }
