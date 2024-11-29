# Solicitamos al usuario que ingrese el número para el cual quiere la tabla de multiplicar
numero = int(input("Ingresa el número para la tabla de multiplicar: "))

# Usamos un bucle for para generar la tabla de multiplicar
for i in range(1, 11):  # El rango es de 1 a 10
    resultado = numero * i
    print(f"{numero} x {i} = {resultado}")
