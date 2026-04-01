#include <iostream>
int resta(int a, int b){
 int restar = a-b;
 return restar;
}
int main(){
    int op1 = resta(5,2);
    int op2 = resta(2,3);
    std::cout<<"El resultado es : "<< op1 << "\n";
    std::cout<<"El resultado es : "<< op2 << "\n"; 
    return 0;
}