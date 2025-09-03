#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Pedir el valor en Celsius
    printf("Ingresa la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    // Fórmula de conversión
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Mostrar el resultado
    printf("%.2f grados Celsius equivalen a %.2f grados Fahrenheit\n", celsius, fahrenheit);

    return 0;
}

