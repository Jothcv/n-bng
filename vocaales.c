#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    int contador = 0;
    char vocales[] = "aeiouAEIOU"; // Definir las vocales (mayúsculas y minúsculas)

    // Solicitar al usuario que ingrese una cadena
    printf("Ingresa una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin); // Usamos fgets para leer cadenas con espacios

    // Recorrer cada carácter de la cadena
    for (int i = 0; i < strlen(cadena); i++) {
        // Comprobar si el carácter es una vocal
        for (int j = 0; j < strlen(vocales); j++) {
            if (cadena[i] == vocales[j]) {
                contador++;
                break; // Salir del bucle si encontramos una vocal
            }
        }
    }

    // Mostrar el resultado
    printf("La cantidad de vocales en la cadena es: %d\n", contador);

    return 0;
}
