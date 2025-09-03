#include <stdio.h>

int main(void) {
    int valor;          // variable para almacenar cada número leído
    int maximo, minimo; // variables para guardar los extremos
    int i;              // índice del bucle

    // 1) Leemos el primer valor para inicializar maximo y minimo
    if (scanf("%d", &valor) != 1) {
        // Si falla la lectura, salimos con error
        return 1;
    }
    maximo = valor;
    minimo = valor;

    // 2) Recorremos los 299 valores restantes (total 300)
    for (i = 1; i < 300; i++) {
        // Leemos el siguiente valor
        if (scanf("%d", &valor) != 1) {
            return 1;
        }
        // Actualizamos máximo si corresponde
        if (valor > maximo) {
            maximo = valor;
        }
        // Actualizamos mínimo si corresponde
        if (valor < minimo) {
            minimo = valor;
        }
    }

    // 3) Imprimimos el máximo y el mínimo separados por espacio
    printf("%d %d\n", maximo, minimo);

    return 0; // Terminación exitosa
}

