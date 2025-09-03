#include <stdio.h>

int main(void) {
    int N, suma = 0, contador = 1;

    printf("Introduce un número entero N: ");
    scanf("%d", &N);

    while (contador <= N) {
        suma = suma + contador;
        contador = contador + 1;
    }

    printf("La suma es: %d\n", suma);

    return 0;
}

