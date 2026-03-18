#include <stdio.h>

int main() {
    int cantidad, precio, total;

    precio = 12;

    printf("Ingrese la cantidad de cuadernos: ");
    scanf("%d", &cantidad);

    total = cantidad * precio;

    printf("El total a pagar es: %d Bs\n", total);

    return 0;
}
