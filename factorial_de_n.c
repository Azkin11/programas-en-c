#include <stdio.h>

int main(void) {
    int N;
    unsigned long long factorial;
    int i;

    // 1) Leer N
    printf("Ingresa un número (>= 0): ");
    scanf("%d", &N);

    // 2) Inicializaciones
    factorial = 1;
    i = 1;

    // 3) Cálculo con do…while
    if (N < 0) {
        // Opcional: manejo de negativos
        printf("No existe factorial de número negativo.\n");
        return 1;
    }
    do {
        factorial *= i;  // multiplica acumulador por i
        i++;             // avanza al siguiente
    } while (i <= N);

    // 4) Mostrar resultado
    printf("El factorial de %d es: %llu\n", N, factorial);
    return 0;
}

