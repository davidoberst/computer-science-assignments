// RUA que calcule los números que hay desde 1 hasta un número introducido por teclado

#include <iostream>
using namespace std;
int main() {
    int user_num;
    cout << "Ingrese su numero : ";
    cin >> user_num;
    for(int x=1; x<=user_num; x++){
      cout<<x<<endl;   
    }
  return 0;
}
