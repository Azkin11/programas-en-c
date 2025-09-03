#include <stdio.h>

int main(void) {
    int a, b;

    printf("Introduce el valor de a: ");
    scanf("%d", &a);
    printf("Introduce el valor de b: ");
    scanf("%d", &b);

    // Intercambio sin variable temporal
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Después del intercambio:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

