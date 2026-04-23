#include <iostream>
using namespace std;
int main() {
  string contraseña = "abcd123";
  string userinput;
  cout << "ingrese contraseña : ";
  cin >> userinput;
  if (userinput == contraseña){
      cout << "contraseña correcta";
  }else{
      cout<<"Contraseña Incorrecta!";
  }
    return 0;
    }
