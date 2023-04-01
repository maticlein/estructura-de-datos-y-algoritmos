#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    int resultado;
    char operacion;

    printf("Ingrese la operación:\n");
    scanf("%c", &operacion);
    printf("Ingrese el primer número:\n");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número:\n");
    scanf("%d", &numero2);
    
    printf("%d %c %d\n", numero1, operacion, numero2);

    switch(operacion){
        case '+': printf("SUMA\n");
                  resultado = numero1 + numero2;
                  break;
        case '-': printf("RESTA\n");
                  resultado = numero1 - numero2;
                  break;
        case '*': printf("MULTIPLICACION\n");
                  resultado = numero1 * numero2;
                  break;
        case '/': printf("DIVISION\n");
                  resultado = numero1 / numero2;
                  break;
        default: printf("NO SE ENCUENTRA LA OPERACION\n");
    }

    if((operacion == '+') || (operacion == '-') || (operacion == '*') || (operacion == '/')){
        printf("%d %c %d = %d\n", numero1, operacion, numero2, resultado);
    } else {
        printf("No se pudo realizar la operación\n");
    }

    return 0;
}