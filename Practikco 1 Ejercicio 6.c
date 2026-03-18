#include <stdio.h>

int main() {
    float num1, num2, mayor;

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        mayor = num1;
        printf("El numero mayor es: %.2f\n", mayor);
    } else if (num2 > num1) {
        mayor = num2;
        printf("El numero mayor es: %.2f\n", mayor);
    } else {
        printf("Ambos numeros son iguales\n");
    }

    return 0;
}
