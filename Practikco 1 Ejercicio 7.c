#include <stdio.h>

int main() {
    float nota;

    printf("Ingrese la nota final del estudiante: ");
    scanf("%f", &nota);

    if (nota >= 51) {
        printf("Aprobado\n");
    } else {
        printf("Reprobado\n");
    }

    return 0;
}
