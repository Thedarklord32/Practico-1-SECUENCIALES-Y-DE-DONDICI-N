#include <stdio.h>

int main() {
    char nombre[100], carrera[100];
    int edad, semestre;

    printf("Ingrese el nombre completo del estudiante: ");
    scanf("%s", &nombre);

    printf("Ingrese la edad del estudiante: ");
    scanf("%d", &edad);

    printf("Ingrese la carrera del estudiante: ");
    scanf("%s", &carrera);

    printf("Ingrese el semestre del estudiante: ");
    scanf("%d", &semestre);

    printf("\n==================================\n");
    printf("      DATOS DEL ESTUDIANTE\n");
    printf("==================================\n");
    printf("Nombre completo: %s\n", nombre);
    printf("Edad: %d\n", edad);
    printf("Carrera: %s\n", carrera);
    printf("Semestre: %d\n", semestre);

    return 0;
}
