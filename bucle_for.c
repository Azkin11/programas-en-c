#include <stdio.h>

int main(void) {
    float areglito[3] = {1, 2, 3};
    int i;
    // Mensaje de depuración inicial
    printf("¡Estoy aquí!\n");
    
    // Bucle con depuración en cada iteración
    for (i = 0; i < 3; i++) {
        printf("iteración %d: %.0f\n", i, areglito[i]);
    }
    
    return 0;
}

