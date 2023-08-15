#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
    int matriz[3][3];

    // Ingresar elementos en la matriz
    cout << "Ingresa los elementos de la matriz 3x3:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matriz[i][j];
        }
    }

    // Mostrar la diagonal principal
    cout << "La diagonal principal es:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << matriz[i][i] << " ";
    }

    return 0;
    getch();
}
