#include <stdio.h>

int main(void) {
    int i = 1;
    int M;
    int suma = 0;

    printf("Ingresa el valor de M: ");
    scanf("%d", &M);

    while (i <= M) {
        if (i % 2 == 0) {
            suma = suma + i;
        }
        i++;  // ¡Muy importante! Avanza el contador
    }

    printf("La suma de los pares de 1 hasta %d es: %d\n", M, suma);
    return 0;
}
/*while (i <= M)
Aquí decimos: “mientras i sea menor o igual que M, haz lo que está dentro del bloque.”

    Si i llega a valer 7 (cuando M es 6), la condición 7 <= 6 es falsa y el bucle termina.

if (i % 2 == 0)

    El operador % (módulo) nos da el resto de dividir i entre 2.

    Si ese resto es cero (== 0), significa que i es par.

    Sólo si es par, entramos al bloque y sumamos.

suma = suma + i;

    Aquí acumulamos el valor de i en nuestra variable total suma.

    Por ejemplo, si i vale 2, hacemos suma = 0 + 2, así suma pasa a ser 2.

i++;

    Esto es imprescindible: “sube” i en 1 para avanzar al siguiente número.

    Si no lo pusieras, i se quedaría siempre en el mismo valor y el while sería infinito.*/

