#include <stdio.h>  // CORREGIDO: eliminada la llave sobrante

int ancho;
int largo;

int main(void) {   // CORREGIDO: cambiar ‘;’ por ‘{’ y mover la llave aquí

    printf("Introduce el ancho: ");  // CORREGIDO: ortografía y dos puntos
    scanf("%d", &ancho);

    printf("Introduce el largo: ");  // CORREGIDO: ortografía y dos puntos
    scanf("%d", &largo);             // CORREGIDO: eliminado espacio antes de ‘largo’

    printf("Resultado: %d\n", ancho * largo);  // CORREGIDO: añadido especificador %d y \n

    return 0;  // CORREGIDO: typo ‘retunr’ → ‘return’
}  // CORREGIDO: cerrar llave de main

