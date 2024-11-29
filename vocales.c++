#include <iostream>
#include <string>
using namespace std;

// Función para contar las vocales en una cadena
int contarVocales(const string& cadena) {
    int contador = 0;
    string vocales = "aeiouAEIOU"; // Definir las vocales (mayúsculas y minúsculas)

    // Recorrer cada carácter de la cadena
    for (char c : cadena) {
        // Comprobar si el carácter es una vocal
        if (vocales.find(c) != string::npos) {
            contador++;
        }
    }

    // Retornar la cantidad de vocales
    return contador;
}

int main() {
    // Solicitar al usuario que ingrese una cadena
    string cadena;
    cout << "Ingresa una cadena de texto: ";
    getline(cin, cadena); // Utilizamos getline para poder leer cadenas con espacios

    // Llamar a la función y mostrar el resultado
    int cantidadVocales = contarVocales(cadena);
    cout << "La cantidad de vocales en la cadena es: " << cantidadVocales << endl;

    return 0;
}