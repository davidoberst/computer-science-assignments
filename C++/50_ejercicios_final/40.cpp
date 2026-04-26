//40. En una galería se pregunta 10 visitantes de los colores luz primarios (rojo, verde, azul) les gusta más. Elabore un algoritmo que evalúe en porcentaje el gusto del público.

#include <iostream>
#include <vector>
#include <algorithm> //trnasform
#include <map>
using namespace std;
int main() {
    vector<string> encuesta;
    string respuesta;
    map<string, int> contador
    contador["rojo"] = 0;
    contador["verde"] = 0;
    contador["azul"] = 0;
    for(int x = 1 ; x<=10; x++){
     cout << "Cual color le gusta mas entre (rojo, verde, azul)"<<"("<<x<<"/10) : ";
     cin >> respuesta;
     transform(respuesta.begin(), respuesta.end(), respuesta.begin(), ::tolower);
     if(respuesta == "rojo" || respuesta == "verde" || respuesta == "azul") {
       encuesta.push_back(respuesta); 
       contador[respuesta]++;
     }else{
        cout<<"Respuesta fuera del rango."<<endl;
        abort();
     }
    }
    for (auto x : encuesta) {
    cout << x << " ";
    }
    return 0;
}
