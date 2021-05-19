#include <stdio.h>

int main(){
    int numero1;
    int numero2;

    printf("Ingrese el primer número:\n");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número:\n");
    scanf("%d", &numero2);

    if(numero1 == numero2){
        printf("Los números son iguales\n");
    } else if(numero1 > numero2) {
        printf("El mayor de los números es %d\n", numero1);
    } else {
        printf("El mayor de los números es %d\n", numero2);
    }

    return 0;
}