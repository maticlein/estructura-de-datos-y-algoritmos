#include <stdio.h>
#include "libreria.h"
#include "calculadora.h"

int main() {
    saludar();
    int num1, num2, resultado;
    char operacion;
    // int opcion;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese la operación (+, -, *): ");
    scanf(" %c", &operacion);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    switch (operacion) {
        case '+':
            resultado = sumar(num1, num2);
            printf("El resultado de la suma es: %d\n", resultado);
            break;
        case '-':
            resultado = restar(num1, num2);
            printf("El resultado de la resta es: %d\n", resultado);
            break;
        case '*':
            resultado = multiplicar(num1, num2);
            printf("El resultado de la multiplicación es: %d\n", resultado);
            break;
        default:
            printf("Operación inválida.\n");
    }
    return 0;
}
