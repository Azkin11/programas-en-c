#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Función para validar usando el algoritmo de Luhn
int validar_luhn(char* numero) {
    int len = strlen(numero);
    int suma = 0;
    int doble = 0;

    // Recorrer de derecha a izquierda
    for (int i = len - 1; i >= 0; i--) {
        int digito = numero[i] - '0';

        if (doble) {
            digito *= 2;
            if (digito > 9) {
                digito = digito / 10 + digito % 10;
            }
        }
        suma += digito;
        doble = !doble;
    }

    return (suma % 10) == 0;
}

// Función para verificar si es un rango válido de Mastercard
int es_mastercard_valido(char* numero) {
    // Mastercard comienza con 5 (51-55) o 2 (2221-2720)
    if (numero[0] == '5' && numero[1] >= '1' && numero[1] <= '5') {
        return 1;
    }
    if (numero[0] == '2') {
        int primeros_cuatro = (numero[0] - '0') * 1000 +
                             (numero[1] - '0') * 100 +
                             (numero[2] - '0') * 10 +
                             (numero[3] - '0');
        if (primeros_cuatro >= 2221 && primeros_cuatro <= 2720) {
            return 1;
        }
    }
    return 0;
}

// Función para generar todas las combinaciones posibles
void generar_combinaciones(char* patron, int posicion, char* numero_actual, int* contador) {
    if (posicion == 16) {
        // Verificar si es Mastercard válido y pasa Luhn
        if (es_mastercard_valido(numero_actual) && validar_luhn(numero_actual)) {
            printf("Número válido encontrado: ");
            for (int i = 0; i < 16; i++) {
                printf("%c", numero_actual[i]);
                if ((i + 1) % 4 == 0 && i < 15) printf(" ");
            }
            printf("\n");
            (*contador)++;
        }
        return;
    }

    if (patron[posicion] != '*') {
        // Si no es un asterisco, usar el dígito conocido
        numero_actual[posicion] = patron[posicion];
        generar_combinaciones(patron, posicion + 1, numero_actual, contador);
    } else {
        // Si es un asterisco, probar todos los dígitos (0-9)
        for (int digito = 0; digito <= 9; digito++) {
            numero_actual[posicion] = '0' + digito;
            generar_combinaciones(patron, posicion + 1, numero_actual, contador);
        }
    }
}

int main() {
    printf("=== GENERADOR DE TARJETAS MASTERCARD ===\n");
    printf("Ejercicio de Ciberseguridad Universitario\n");
    printf("Método: Validación con Algoritmo de Luhn\n\n");

    char patron[17];
    char numero_actual[17];
    int contador = 0;
    int opcion;

    printf("Seleccione una opción:\n");
    printf("1. Usar patrón predeterminado: ****6156********\n");
    printf("2. Ingresar patrón personalizado\n");
    printf("3. Ejemplo con más dígitos conocidos\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            // Patrón basado en el ejemplo: •••• 6156
            strcpy(patron, "****6156********");
            printf("\nUsando patrón: %s\n", patron);
            break;

        case 2:
            printf("Ingrese el patrón (use * para dígitos desconocidos, 16 caracteres total):\n");
            printf("Ejemplo: 5***6156****1234\n");
            scanf("%s", patron);
            if (strlen(patron) != 16) {
                printf("Error: El patrón debe tener exactamente 16 caracteres\n");
                return 1;
            }
            break;

        case 3:
            // Ejemplo con más restricciones para reducir combinaciones
            strcpy(patron, "5***6156****123*");
            printf("\nUsando patrón de ejemplo: %s\n", patron);
            break;

        default:
            printf("Opción inválida\n");
            return 1;
    }

    printf("\nBuscando combinaciones válidas...\n");
    printf("Esto puede tomar tiempo dependiendo de la cantidad de asteriscos.\n\n");

    clock_t inicio = clock();

    // Inicializar número_actual
    numero_actual[16] = '\0';

    // Generar todas las combinaciones
    generar_combinaciones(patron, 0, numero_actual, &contador);

    clock_t fin = clock();
    double tiempo = ((double)(fin - inicio)) / CLOCKS_PER_SEC;

    printf("\n=== RESULTADOS ===\n");
    printf("Patrón analizado: %s\n", patron);
    printf("Total de números válidos encontrados: %d\n", contador);
    printf("Tiempo de ejecución: %.2f segundos\n", tiempo);

    // Calcular estadísticas
    int asteriscos = 0;
    for (int i = 0; i < 16; i++) {
        if (patron[i] == '*') asteriscos++;
    }

    printf("Dígitos desconocidos: %d\n", asteriscos);
    printf("Combinaciones teóricas: 10^%d = ", asteriscos);
    long long combinaciones = 1;
    for (int i = 0; i < asteriscos; i++) {
        combinaciones *= 10;
    }
    printf("%lld\n", combinaciones);

    if (contador > 0) {
        printf("Probabilidad de validez: %.4f%%\n", (double)contador / combinaciones * 100);
    }

    printf("\n=== NOTAS EDUCATIVAS ===\n");
    printf("- Este programa es solo para fines educativos\n");
    printf("- Utiliza el algoritmo de Luhn para validación\n");
    printf("- Los números generados son válidos matemáticamente pero no reales\n");
    printf("- Mastercard usa rangos específicos: 51-55 y 2221-2720\n");

    return 0;
}
