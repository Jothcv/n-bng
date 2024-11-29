// Pedir al usuario el símbolo para la pirámide
let simbolo = prompt("Ingresa el símbolo que quieres usar para la pirámide:");

// Pedir al usuario el número de filas de la pirámide
let filas = parseInt(prompt("Ingresa el número de filas para la pirámide:"));

// Generar la pirámide
for (let i = 1; i <= filas; i++) {
    // Crear los espacios para centrar la pirámide
    let espacios = " ".repeat(filas - i);
    // Crear los símbolos para la fila actual
    let simbolos = simbolo.repeat(2 * i - 1);
    // Mostrar la fila de la pirámide
    document.write(espacios + simbolos + "<br>");
}
