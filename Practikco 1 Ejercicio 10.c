#include <stdio.h>

int main() {
    float horas, pagoHora, salarioBase, bono, salarioTotal;

    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horas);

    printf("Ingrese el pago por hora: ");
    scanf("%f", &pagoHora);

    salarioBase = horas * pagoHora;

    if (horas > 40) {
        bono = salarioBase * 0.10;
    } else {
        bono = 0;
    }

    salarioTotal = salarioBase + bono;

    printf("Salario base: %.2f\n", salarioBase);
    printf("Bono: %.2f\n", bono);
    printf("Salario total: %.2f\n", salarioTotal);

    return 0;
}
