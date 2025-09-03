#include <stdio.h>

int main(void)
{
    float nota;

    printf("Ingrese una nota:\n");
    scanf("%f", &nota);

    if (nota >= 6.0) {
        printf("Aprobado\n");
    } else {
        printf("Reprobado\n");
    }

    return 0;
}

