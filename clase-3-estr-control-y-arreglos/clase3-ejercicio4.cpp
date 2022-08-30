#include <stdio.h>

int main(){
    unsigned long sumatoria = 0;
    unsigned long numero = 0;

    do{
        // INGRESE UN NUMERO
        printf("Ingrese un número:\n");
        scanf("%lu", &numero);
        sumatoria += numero;
    } while(numero != 0); // MIENTRAS EL NUMERO SEA MAYOR QUE 0

    printf("El resultado de la sumatoria es: %lu\n", sumatoria);

    return 0;
}