#include <iostream>

int suma(int n1, int n2) {
      return n1 + n2;
    }
int main(){
  int resultado = suma(8,8);
  int resultado2 = suma(2,5);
  std::cout<<"El resultado es : " << resultado << "\n";
  std::cout<<"El resultado es : " << resultado2;
  return 0;
}