//29. RUA que calcule el residuo de la división de 1 hasta 10 de un numero dado.

#include <iostream>
using namespace std;
int main() {
    int user_num;
    cout << "Ingrese su numero : ";
    cin >> user_num;
    for(int x=1; x<11;x++){
      int residuo = user_num % x;
      cout<<"Residuo de "<<x <<" es : "<<residuo<<endl;
    }
     
  return 0;
}
