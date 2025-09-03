#include <stdio.h>

int main(void) {
    int n;

    /* Pedimos al usuario que introduzca un número */
    printf("Introduce un número: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Error al leer el número.\n");
        return 1;
    }

    /* Estructura if…else para clasificar el número */
    if (n > 0) {
        printf("El número %d es positivo.\n", n);
    }
    else if (n < 0) {
        printf("El número %d es negativo.\n", n);
    }
    else {
        printf("El número es cero.\n");
    }

    return 0;
}
