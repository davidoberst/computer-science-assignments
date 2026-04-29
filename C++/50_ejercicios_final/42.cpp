//42. En un determinado peaje se desea saber cuántos carros particulares y cuántos buses pasaron
//en un día, lo mismo que el promedio de personas que viajan en carro particular y el promedio
//de personas que viajan en bus. Se debe tener en cuenta que por cada vehículo que pase, se
//debe indagar por el tipo de vehículo que es y el número de pasajeros que transporta. 
//carro = 1 ,  bus = 2, otro = 3

#include <iostream>
using namespace std;

int main() {
    //variables
    string decision;
    int decision_personas;
    int carros = 0;
    int personas_carro = 0;
    int buses = 0;
    int personas_buses = 0;
    int otros = 0;
    int personas_otro = 0;

    while(1){
    cout<<"Ingrese un vehiculo (carro-bus-otro) ingrese x para salir : " ;
    cin>>decision;

    if(decision == "carro"){
       carros += 1;
       cout<<"Cuantas personas hay adentro? :";
       cin >> decision_personas;
       personas_carro += decision_personas;

    }else if(decision == "bus"){
       buses += 1;
       cout<<"Cuantas personas hay adentro? :";
       cin >> decision_personas;
       personas_buses += decision_personas;

    }else if(decision == "x" || decision == "X"){
       cout<<endl<<"--------RESULTADOS--------------"<<endl;
       cout<<"Carros que pasaron : "<<carros<<endl;
       cout<<"Buses que pasaron : "<<buses<<endl;
       cout<<"Otros que pasaron : "<<otros<<endl;
       cout<<endl<<"-------------------------"<<endl;
       
       // Promedios
       if(carros > 0) {
           cout << "Promedio de personas en carro: " << (float)personas_carro / carros << endl;
       }
       if(buses > 0) {
           cout << "Promedio de personas en bus: " << (float)personas_buses / buses << endl;
       }
       
       break;    
       
    }else{
        otros += 1;
        cout<<"Cuantas personas hay adentro? :";
        cin >> decision_personas;
        personas_otro += decision_personas;
     }
    }//end while
   
    return 0;
}
