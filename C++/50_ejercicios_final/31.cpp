//31. Calcular el volumen de una esfera dado su radio
// cuatro tercios por pi por el radio al cubo.

#include <iostream>
using namespace std;
double radio;
float pi = 3.1416;

float V (){
    return 4.0/3.0 * pi * radio * radio * radio;
}


int main() {
    cout << "Radio : ";
    cin >> radio;
    cout <<"El volumen de la esfera es : " << V()<<endl;
    
  return 0;
}
