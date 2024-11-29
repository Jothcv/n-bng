// Pedir al usuario que ingrese un número
let numero = parseInt(prompt("Ingresa un número para calcular su factorial:"));

// Función para calcular el factorial
function calcularFactorial(n) {
    let factorial = 1;
    for (let i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

// Mostrar el resultado
if (numero >= 0) {
    let resultado = calcularFactorial(numero);
    document.write(`El factorial de ${numero} es: ${resultado}`);
} else {
    document.write("Por favor, ingresa un número entero no negativo.");
}