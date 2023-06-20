#include <iostream>

int contarVocales(const char* frase) {
    int contador = 0;

    for (int i = 0; frase[i] != '\0'; i++) {
        char caracter = std::tolower(frase[i]);  // Convertir a minúscula para comparar

        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            contador++;
        }
    }

    return contador;
}

int main() {
    const int MAX_LONGITUD = 36;  // Considerando 35 caracteres + el carácter nulo ('\0')
    char frase[MAX_LONGITUD];

    std::cout << "Ingrese una frase (max. 35 caracteres): ";
    std::cin.getline(frase, MAX_LONGITUD);

    int cantidadVocales = contarVocales(frase);

    std::cout << "Cantidad de vocales utilizadas: " << cantidadVocales << std::endl;

    return 0;
}
