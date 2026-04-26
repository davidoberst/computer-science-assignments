//37. Evaluar la función y=5/3x + 3/2x + 8 cuando x–> -5…20 (rango de -5 hasta 20)

#include <iostream>
using namespace std;
int main() {
 for(int x = -5; x<=20 ;x++){
  double y = (19.0 / 6.0) * x + 8;
    cout <<x<<": "<< y <<endl;
 }
    return 0;
}
