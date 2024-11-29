simbolo = input("Ingresa el símbolo que quieres usar para la pirámide: ")

# Solicitamos al usuario el número de filas de la pirámide
filas = int(input("Ingresa el número de filas para la pirámide: "))

# Usamos un bucle for para construir cada fila
for i in range(1, filas + 1):
    # En cada fila, agregamos espacios antes del símbolo para centrarlo
    print(" " * (filas - i) + simbolo * (2 * i - 1))