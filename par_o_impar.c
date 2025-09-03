#include <stdio.h>

int main(void) {
    int n;

    printf("Introduzca un número: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("El número %d es par\n", n);
    else
        printf("El número %d es impar\n", n);

    return 0;
}
