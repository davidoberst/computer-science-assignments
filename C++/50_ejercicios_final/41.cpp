#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    string sexo;
    float puntos;
    map<string, int> conteo;
    map<string, float> suma;

    conteo["hombre"] = 0;
    conteo["mujer"] = 0;
    suma["hombre"] = 0;
    suma["mujer"] = 0;

    for(int x = 1; x <= 5; x++){
        cout << "Ingrese sexo (hombre, mujer) (" << x << "/5): ";
        cin >> sexo;
        transform(sexo.begin(), sexo.end(), sexo.begin(), ::tolower);

        if(sexo == "hombre" || sexo == "mujer") {
            cout << "Puntos: ";
            cin >> puntos;
            conteo[sexo]++;
            suma[sexo] += puntos;
        } else {
            cout << "Sexo no valido." << endl;
            return 0;
        }
    }

    float promH, promM;

    if (conteo["hombre"] > 0) {
        promH = suma["hombre"] / conteo["hombre"];
    } else {
        promH = 0;
    }

    if (conteo["mujer"] > 0) {
        promM = suma["mujer"] / conteo["mujer"];
    } else {
        promM = 0;
    }

    cout << "Promedio Hombres: " << promH << endl;
    cout << "Promedio Mujeres: " << promM << endl;

    if (promH > promM) {
        cout << "Mejor desempeño: Hombres" << endl;
    } else if (promM > promH) {
        cout << "Mejor desempeño: Mujeres" << endl;
    } else {
        cout << "Empate o no hay datos suficientes" << endl;
    }

    return 0;
}
