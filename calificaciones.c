#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

char get_letter_grade(int score) {
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 60) return 'C';
    if (score >= 40) return 'D';
    return 'F';
}

int read_int(const char *prompt, int *out) {
    char buf[100];
    while (1) {
        fputs(prompt, stdout);
        if (!fgets(buf, sizeof buf, stdin)) {
            return 0; // EOF o error de lectura
        }
        char *endptr;
        errno = 0;
        long val = strtol(buf, &endptr, 10);
        if (errno != 0 || endptr == buf || (*endptr != '\\n' && *endptr != '\\0')) {
            printf("Entrada inválida: por favor ingresa un número entero.\n");
            continue;
        }
        if (val < 0 || val > 100) {
            printf("La nota debe estar entre 0 y 100.\n");
            continue;
        }
        *out = (int)val;
        return 1;
    }
}

int main(void) {
    int nota;
    if (!read_int("Ingrese una nota numérica (0-100): ", &nota)) {
        fprintf(stderr, "No se pudo leer la entrada correctamente.\n");
        return 1;
    }

    char grade = get_letter_grade(nota);
    printf("%c\n", grade);
    return 0;
}


