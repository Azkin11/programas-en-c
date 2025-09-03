#include <stdio.h>

int main(void) {
    int N, i = 2;
    int esPrimo = 1;

    // 1) Leer el número
    printf("Ingresa un número entero: ");
    scanf("%d", &N);

    // 2) Casos especiales
    if (N < 2) {
        esPrimo = 0;
    }

    // 3) Comprobar divisores
    while (i <= N/2 && esPrimo) {
        if (N % i == 0) {
            esPrimo = 0;
        }
        i++;
    }

    // 4) Mostrar resultado
    if (esPrimo)
        printf("El número %d es primo.\n", N);
    else
        printf("El número %d no es primo.\n", N);

    return 0;
}

