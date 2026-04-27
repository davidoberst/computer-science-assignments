#include <iostream>
using namespace std;

int main() {
    int n; 
    int suma = 0;

    for (; n <= 5; ) {
        cout << "Ingresa un numero: ";
        cin >> n;
       suma = suma + n;
    }
    cout << "Resultado: " << suma << endl;

    return 0;
}
