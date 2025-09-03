#include <stdio.h>

int a;
int b;

int main(void) {
    // 1) Pedimos al usuario que introduzca dos números
    printf("Introduce dos números enteros separados por espacio: ");
    fflush(stdout); // Asegura que el texto se muestra antes de leer

    // 2) Leemos *dos* %d, en el orden y con el número de argumentos correcto
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "Error: tienes que escribir dos enteros.\n");
        return 1;
    }

    // 3) Mostramos los resultados
    printf("Suma:           %d\n", a + b);
    printf("Resta:          %d\n", a - b);
    printf("Multiplicación: %d\n", a * b);

    if (b != 0) {
        printf("División:       %d\n", a / b);
    } else {
        printf("División:       ¡Error! División entre cero.\n");
    }

    return 0;
}

