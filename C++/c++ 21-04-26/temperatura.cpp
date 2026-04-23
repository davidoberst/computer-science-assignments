#include <iostream>
using namespace std;
int main() {
    int temperatura;
    cout << "ingrese temperatura: ";
    cin >> temperatura;
    if(temperatura < 10){
       cout << "que frio!"; 
    }else if(temperatura >= 10 && temperatura < 15){
       cout << "templado";
    }else if(temperatura >= 15 && temperatura < 25){
       cout << "calido";
    }else if(temperatura >= 25 && temperatura < 35){
       cout << "que calor!";
    }else{
        cout << "nos quemamos";
    }
    return 0;
}
