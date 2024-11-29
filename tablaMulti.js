// Pedir al usuario que ingrese el número para la tabla de multiplicar
let numero = parseInt(prompt("Ingresa el número para la tabla de multiplicar:"));

// Generar la tabla de multiplicar
for (let i = 1; i <= 10; i++) {
    let resultado = numero * i;
    document.write(`${numero} x ${i} = ${resultado}<br>`);
}