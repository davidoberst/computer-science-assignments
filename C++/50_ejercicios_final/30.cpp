// 30. RUA que calcule el perímetro y área de un círculo dado su radio. (2 x pi x radio) -- (pi por el radio al cuadrado.)

#include <iostream>
using namespace std;
double radio;
float pi = 3.1416;

float calculo_p(){
    return 2 * pi * radio;
}

float calculo_a(){
    return  pi * radio * radio;
}

int main() {
    cout << "Radio : ";
    cin >> radio;
    cout <<"El perimetro es : " << calculo_p()<<endl;
    cout <<"El area es : "<<calculo_a();
  return 0;
}
