#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena;
    int contador = 0;
    string vocales = "aeiouAEIOU"; // Definir las vocales (mayúsculas y minúsculas)

    // Solicitar al usuario que ingrese una cadena
    cout << "Ingresa una cadena de texto: ";
    getline(cin, cadena); // Usamos getline para poder leer cadenas con espacios

    // Recorrer cada carácter de la cadena
    for (char c : cadena) {
        // Comprobar si el carácter es una vocal
        if (vocales.find(c) != string::npos) {
            contador++;
        }
    }

    // Mostrar el resultado
    cout << "La cantidad de vocales en la cadena es: " << contador << endl;

    return 0;
}