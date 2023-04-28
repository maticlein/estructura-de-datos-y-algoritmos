#include <stdio.h>

int main(){
    int* numero1 = new int;
    int* numero2 = new int;

    printf("Ingrese el primer número: ");
    scanf("%d", numero1);

    printf("Ingrese el segundo número: ");
    scanf("%d", numero2); 

    printf("El resultado de la suma entre %d y %d es: %d\n", *numero1, *numero2, *numero1 + *numero2);

    printf("La dirección de memoria de numero1 es %p\n", numero1);
    printf("La dirección de memoria de numero2 es %p\n", numero2);

    delete numero1;
    delete numero2;

    return 0;
}