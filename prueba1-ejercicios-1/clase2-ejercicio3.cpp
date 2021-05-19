#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    int numero3;
    int mayor;

    printf("Ingrese el primer número:\n");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número:\n");
    scanf("%d", &numero2);
    printf("Ingrese el tercer número:\n");
    scanf("%d", &numero3);

    if((numero1 == numero2) && (numero2 == numero3)){
        printf("Los tres números son iguales.\n");
    } else {
        mayor = numero1;
        if(numero2 > mayor){
            mayor = numero2;
        }
        if(numero3 > mayor){
            mayor = numero3;
        }
        printf("El número mayor es %d\n", mayor);
    }

    return 0;
}