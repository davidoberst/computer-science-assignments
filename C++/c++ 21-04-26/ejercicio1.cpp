#include <iostream>
using namespace std;
int main() {
  int num;
  cout << "ingrese numero :";
  cin >> num;
  if(num > 100){
      cout << "mayor a 100";
  }else if (num < 100){
      cout << "menor a 100";
  }else if(num == 100){
      cout<<"igual a 100";
  }
    return 0;
    }
