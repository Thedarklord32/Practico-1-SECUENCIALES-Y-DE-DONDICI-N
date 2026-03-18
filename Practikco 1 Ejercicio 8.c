#include <stdio.h>

int main() {
    float compra, descuento, total;

    printf("Ingrese el monto de la compra: ");
    scanf("%f", &compra);

    if (compra > 100) {
        descuento = compra * 0.10;
    } else {
        descuento = 0;
    }

    total = compra - descuento;

    printf("Descuento aplicado: %.2f Bs\n", descuento);
    printf("Total final a pagar: %.2f Bs\n", total);

    return 0;
}
