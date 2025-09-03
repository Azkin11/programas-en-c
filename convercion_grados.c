#include <stdio.h>

int main(void) {
    float celsius, fahrenheit;

    printf("Introduce la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("La temperatura en Fahrenheit es: %.2f\n", fahrenheit);

    return 0;
}

