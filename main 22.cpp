#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tamaño;
    
    cout << "Ingrese el tamaño del vector: ";
    cin >> tamaño;
    
    vector<int> numeros(tamaño);
    
    for (int i = 0; i < tamaño; ++i) {
        cout << "Ingrese el valor para la posición " << i << ": ";
        cin >> numeros[i];
    }
    
    cout << "Vector original:" << endl;
    for (int i = 0; i < tamaño; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    
    cout << "Vector en orden inverso:" << endl;
    for (int i = tamaño - 1; i >= 0; --i) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    
    return 0;
}
