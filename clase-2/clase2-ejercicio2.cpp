#include <stdio.h>

int main(){
    int numero;

    printf("Ingrese un número:\n");
    scanf("%d", &numero);

    if(numero%2 == 0){
        printf("El número %d es PAR\n", numero);
    } else {
        printf("El número %d es IMPAR\n", numero);
    }

    return 0;
}