#include <iostream>
using namespace std;

int main() {
    int edades[10];

    cout << "Ingrese 10 edades:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Edad " << i + 1 << ": ";
        cin >> edades[i];
    }

    // Método de Burbuja para ordenar el arreglo en forma ascendente
    for (int i = 0; i < 10 - 1; ++i) {
        for (int j = 0; j < 10 - i - 1; ++j) {
            if (edades[j] > edades[j + 1]) {
                // Intercambiar elementos si están en el orden incorrecto
                int temp = edades[j];
                edades[j] = edades[j + 1];
                edades[j + 1] = temp;
            }
        }
    }

    cout << "Arreglo ordenado en forma ascendente:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << edades[i] << " ";
    }
    cout << endl;

    return 0;
}
