#include <iostream>
using namespace std;
int main() {
	
    int arregloOriginal[5];
    int arregloMultiplicado[5];

    // Leer los n�meros y almacenarlos en el primer arreglo
    cout << "INGRESE 5 NUMEROS:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> arregloOriginal[i];
    }

    // Multiplicar los n�meros por 2 y copiarlos al segundo arreglo
    for (int i = 0; i < 5; ++i) {
        arregloMultiplicado[i] = arregloOriginal[i] * 2;
    }

    // Mostrar el segundo arreglo multiplicado
    cout << "\n ARREGLO MULTIPLICADO POR 2:\n";
    for (int i = 0; i < 5; ++i) {
    	
    }
    
    return 0;
    
}
