#include <iostream>
#include <vector>
#include <algorithm>

struct Estudiante {
    std::string nombre;
    std::vector<int> notas;
};

void ingresarNotas(std::vector<Estudiante>& estudiantes) {
    std::string nombre;
    std::cout << "Ingrese el nombre del estudiante: ";
    std::cin >> nombre;

    auto it = std::find_if(estudiantes.begin(), estudiantes.end(), [&](const Estudiante& e) {
        return e.nombre == nombre;
    });

    if (it != estudiantes.end()) {
        int nota;
        std::cout << "Ingrese la nota del estudiante: ";
        std::cin >> nota;
        it->notas.push_back(nota);
        std::cout << "Nota ingresada correctamente." << std::endl;
    } else {
        std::cout << "Estudiante no encontrado." << std::endl;
    }
}

void mostrarNotas(const std::vector<Estudiante>& estudiantes) {
    std::string nombre;
    std::cout << "Ingrese el nombre del estudiante: ";
    std::cin >> nombre;

    auto it = std::find_if(estudiantes.begin(), estudiantes.end(), [&](const Estudiante& e) {
        return e.nombre == nombre;
    });

    if (it != estudiantes.end()) {
        std::cout << "Notas del estudiante " << it->nombre << ":" << std::endl;
        for (const auto nota : it->notas) {
            std::cout << nota << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Estudiante no encontrado." << std::endl;
    }
}

void calcularPromedioGeneral(const std::vector<Estudiante>& estudiantes) {
    int sumaTotal = 0;
    int cantidadTotal = 0;

    for (const auto& estudiante : estudiantes) {
        for (const auto nota : estudiante.notas) {
            sumaTotal += nota;
            cantidadTotal++;
        }
    }

    if (cantidadTotal == 0) {
        std::cout << "No hay notas registradas." << std::endl;
    } else {
        float promedio = static_cast<float>(sumaTotal) / cantidadTotal;
        std::cout << "Promedio general de notas: " << promedio << std::endl;
    }
}

int main() {
    std::vector<Estudiante> estudiantes;

    int opcion = 0;

    while (opcion != 5) {
        std::cout << "MENU" << std::endl
                  << "1. Ingresar notas" << std::endl
                  << "2. Mostrar notas" << std::endl
                  << "3. Visualizar notas individuales" << std::endl
                  << "4. Promedio general de notas" << std::endl
                  << "5. Salir" << std::endl
                  << "Ingrese una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                ingresarNotas(estudiantes);
                break;
            case 2:
                mostrarNotas(estudiantes);
                break;
            case 3:
                std::cout << "Esta función aún no está implementada." << std::endl;
                break;
            case 4:
                calcularPromedioGeneral(estudiantes);
                break;
            case 5:
                std::cout << "Saliendo del programa." << std::endl;
                break;
            default:
                std::cout << "Opción inválida. Por favor, ingrese una opción válida." << std:: endl;
            }
        }
        return
    }
    
