// Función para contar las vocales en una cadena
function contarVocales(cadena) {
    // Definir las vocales
    let vocales = "aeiouAEIOU";
    let contador = 0;

    // Recorrer cada carácter de la cadena
    for (let i = 0; i < cadena.length; i++) {
        // Comprobar si el carácter es una vocal
        if (vocales.indexOf(cadena[i]) !== -1) {
            contador++;
        }
    }

    // Retornar la cantidad de vocales
    return contador;
}

// Pedir al usuario que ingrese una cadena
let cadena = prompt("Ingresa una cadena de texto:");

// Llamar a la función y mostrar el resultado
let cantidadVocales = contarVocales(cadena);
document.write(`La cantidad de vocales en la cadena es: ${cantidadVocales}`);