#include <stdio.h>

int main(void){
    int dias;
    int horas;

    printf("Ingrese un número de días: ");
    scanf("%d", &dias);

    horas = dias * 24;

    printf("El número de horas es: %d\n", horas);

    return 0;
}

