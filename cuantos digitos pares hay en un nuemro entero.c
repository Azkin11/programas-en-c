#include <stdio.h>

int main(void) {
    int N, digito, contador = 0;

    // 1) Leer el número
    printf("Ingresa un número entero: ");
    scanf("%d", &N);

    // (Opcional: trabajar con valor absoluto en caso de N negativo)
    if (N < 0) N = -N;

    // 2) Mientras queden dígitos...
    while (N > 0) {
        digito = N % 10;       // extraer último dígito
        if (digito % 2 == 0)   // ¿es par?
            contador++;        // sumar uno al conteo
        N = N / 10;            // “tirar” dígito procesado
    }

    // 3) Mostrar resultado
    printf("Cantidad de dígitos pares: %d\n", contador);
    return 0;
}

