//Area de un circulo = pi x radio al cuadradood

#include <iostream>
int main(){
    float pi = 3.1416 ;
    int radio;
    std::cout<<"Ingresa el radio del circulo : ";std::cin>>radio;
    std::cout<<"Resultado = "<<pi * radio * radio;
    return 0;
}