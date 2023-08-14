#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tama�o;
    
    cout << "Ingrese el tama�o del vector: ";
    cin >> tama�o;
    
    vector<int> numeros(tama�o);
    
    for (int i = 0; i < tama�o; ++i) {
        cout << "Ingrese el valor para la posici�n " << i << ": ";
        cin >> numeros[i];
    }
    
    cout << "Vector original:" << endl;
    for (int i = 0; i < tama�o; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    
    cout << "Vector en orden inverso:" << endl;
    for (int i = tama�o - 1; i >= 0; --i) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    
    return 0;
}
