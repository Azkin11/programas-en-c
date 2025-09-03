#include <stdio.h>

int main(void) {
    char nombre[50];  // variable para guardar el nombre

    printf("Ingresa tu nombre: ");
    scanf("%49s", nombre);  // lectura segura para evitar desbordamientos

    printf("Hola, %s\n", nombre);
    return 0;
}

