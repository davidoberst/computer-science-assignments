//40. En una galería se pregunta 10 visitantes de los colores luz primarios (rojo, verde, azul) les gusta más. Elabore un algoritmo que evalúe en porcentaje el gusto del público.

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<string> encuesta;
    string respuesta;
    for(int x = 1 ; x<=10; x++){
     cout << "Cual color le gusta mas entre (rojo, verde, azul)"<<"("<<x<<"/10) : ";
     cin >> respuesta;
     encuesta.push_back(respuesta);
    }
    cout<<encuesta.size();
    return 0;
}
