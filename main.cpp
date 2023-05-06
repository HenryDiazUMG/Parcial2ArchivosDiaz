//Primer ejercicio

/*#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <windows.h>

using namespace std;



int main() {
    int cantidad_archivos;
    string texto;
    string nombre="documento";

    cout << "Ingrese la cantidad de archivos a crear: ";
    cin >> cantidad_archivos;

    if (cantidad_archivos % 2 == 0) {
        for (int i = 1; i <= cantidad_archivos; i++) {

            ofstream archivo;
            archivo.open("C:\\Users\\cliente\\Documents\\Par\\" + nombre + to_string(i) + ".txt");
            archivo.close();
        }
        Sleep(1000);
    } else {

        for (int i = 1; i <= cantidad_archivos; i++) {

            ofstream archivo;
            archivo.open("C:\\Users\\cliente\\Documents\\impar\\" + nombre + to_string(i) + ".txt");
            archivo.close();
        }
        Sleep(1000);
    }
    return 0;
}*/

//Segundo ejercicio
/*#include <iostream>
#include <fstream>
#include <sstream>

void agregarTextoALosArchivos(int cantidadArchivos) {
    for (int i = 1; i <= cantidadArchivos; i++) {
        std::ostringstream nombreArchivo;
        nombreArchivo << "documento" << i << ".txt";

        std::ofstream archivo(nombreArchivo.str(), std::ios::app);
        if (archivo.is_open()) {
            for (int j = 1; j <= i; j++) {
                archivo << "Línea " << j << " del documento " << i << std::endl;
            }
            archivo.close();
            std::cout << "Se agregaron " << i << " líneas al archivo " << nombreArchivo.str() << std::endl;
        } else {
            std::cerr << "No se pudo abrir el archivo " << nombreArchivo.str() << std::endl;
        }
    }
}

int main() {
    int cantidadArchivos;
    std::cout << "Ingrese la cantidad de archivos que desea crear: ";
    std::cin >> cantidadArchivos;

    agregarTextoALosArchivos(cantidadArchivos);

    return 0;
}*/