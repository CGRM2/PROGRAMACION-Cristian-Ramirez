#include <iostream>
using namespace std;

int main() {
    // Defininir el tamaño de la matriz
    const int filas = 4;
    const int columnas = 4;

    // Crear la matriz
    int matriz[filas][columnas];

    // Ejecucion de la matriz con los numeros requeridos
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = j + 1;
        }
    }

    // Mostrar la matriz
    cout << "Matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Calcular las sumas horizontales y mostrar los resultados
    cout << "Sumas horizontales: " << endl;
    for (int i = 0; i < filas; i++) {
        int sumaHorizontal = 0;
        for (int j = 0; j < columnas; j++) {
            sumaHorizontal += matriz[i][j];
        }
        cout << "Fila " << i + 1 << ": " << sumaHorizontal << endl;
    }

    // Calcular las sumas verticales y mostrar los resultados
    cout << "Sumas verticales: " << endl;
    for (int j = 0; j < columnas; j++) {
        int sumaVertical = 0;
        for (int i = 0; i < filas; i++) {
            sumaVertical += matriz[i][j];
        }
        cout << "Columna " << j + 1 << ": " << sumaVertical << endl;
    }

    return 0;
}
