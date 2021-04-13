#include <stdio.h>

int main(){
    int* numero1 = new int;
    int* numero2 = new int;
    int* suma = new int;

    printf("Ingrese el primer número:\n");
    scanf("%d", numero1);
    printf("Ingrese el segundo número:\n");
    scanf("%d", numero2);

    *suma = *numero1 + *numero2;

    printf("El resultado de la suma entre %d y %d es: %d\n", *numero1, *numero2, *suma);
    delete numero1;
    delete numero2;
    delete suma;

    return 0;
}