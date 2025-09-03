#include <stdio.h>
#include <math.h>  // Necesario para sqrt()

int main(void) {
    int n, i, esPrimo = 1;

    printf("Introduce un número entero positivo: ");
    scanf("%d", &n);

    if (n <= 1) {
        esPrimo = 0;
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }

    if (esPrimo)
        printf("%d es un número primo.\n", n);
    else
        printf("%d NO es un número primo.\n", n);

    return 0;
}
