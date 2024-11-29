# Definir las vocales (mayúsculas y minúsculas)
vocales = "aeiouAEIOU"
contador = 0

# Pedir al usuario que ingrese una cadena
cadena = input("Ingresa una cadena de texto: ")

# Recorrer cada carácter de la cadena
for c in cadena:
    # Comprobar si el carácter es una vocal
    if c in vocales:
        contador += 1

# Mostrar el resultado
print(f"La cantidad de vocales en la cadena es: {contador}")
