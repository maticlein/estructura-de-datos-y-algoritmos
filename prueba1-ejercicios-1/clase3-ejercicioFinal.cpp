#include <stdio.h>

int main(){
    printf("Ingrese el primero número:\n");
    int* numero1 = new int; 
    scanf("%d", numero1);
    
    printf("Ingrese el segundo número:\n");
    int* numero2 = new int; 
    scanf("%d", numero2);

    int* suma = new int;

    *suma = *numero1 + *numero2;
    printf("El resultado de la suma entre %d y %d es %d.\n", *numero1, *numero2, *suma);

    delete numero1;
    delete numero2;
    delete suma;
    printf("La memoria utilizada fue liberada.\n");

    return 0;
}