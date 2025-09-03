/* Pide la contraseña hasta que el usuario escriba "1234".
   Demuestra el uso de un bucle do-while. */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char passwd[20];          /* espacio suficiente para la contraseña */

    do {
        printf("Introduce la contraseña: ");
        scanf("%19s", passwd);    /* lee una palabra (máx. 19 carac.)   */
    } while (strcmp(passwd, "1234") != 0);

    printf("¡Contraseña correcta!\n");
    return 0;
}

