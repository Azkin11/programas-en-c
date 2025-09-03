#include <stdio.h>               /* 1. Incluye la cabecera estándar de entrada/salida
                                     └─ Necesaria para usar printf, scanf, fprintf.     */

#define IVA(p) ((p) * 0.16f)     /* 2. Macro: calcula el 16 % de ‘p’
                                     ├─ (p)     → parámetro (precio base)
                                     ├─ 0.16f   → 16 % como flotante
                                     └─ Paréntesis protegen precedencia de operadores. */

int main(void)                   /* 3. Función principal: el SO empieza aquí.          */
{
    float precio;                /* 4. Almacena el precio con centavos (punto flotante) */

    printf("Ingrese el precio: ");          /* 5. Solicita el dato al usuario.        */

    if (scanf("%f", &precio) != 1) {        /* 6. Lee el precio y verifica éxito:
                                               └─ scanf devuelve 1 si leyó un número.  */
        fprintf(stderr, "Entrada no válida.\n"); /* 7. Mensaje de error a stderr.     */
        return 1;                           /* 8. Termina con código de error (≠0).   */
    }

    float total = precio + IVA(precio);     /* 9. Calcula total = precio + 16 %.       */

    printf("El precio con IVA es: %.2f\n", total); /* 10. Muestra resultado con 2 dec.*/

    return 0;                               /* 11. Fin del programa; 0 = éxito.        */
}

