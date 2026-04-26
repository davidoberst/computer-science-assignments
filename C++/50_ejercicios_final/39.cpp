#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n = 10;
    for(int x = 0; x < n; x++) {
        cout << "Ingresa un numero (" << x + 1 << "/10): ";
        cin >> arr[x];
    }
    for (int i = 0; i < n; ) {
        if (arr[i] < 0) { 
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1]; 
            }
            n--; 
        } else {
            i++;
       }
    }
    cout << "\nArray sin negativos: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
    
