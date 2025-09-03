#include <stdio.h>

int main(void) {
    float a, b, c;

    printf("Ingrese los 3 números a redondear\n");
    if (scanf("%f %f %f", &a, &b, &c) != 3) {
        printf("Error al leer los números\n");
        return 1;
    }
    printf("Los resultados son: %.0f %.0f %.0f\n", a, b, c);
    return 0;
}

