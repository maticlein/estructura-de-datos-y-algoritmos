#include <stdio.h>

int main(){
    int* numero1 = new int; // Crea el puntero numero1 y le asigna una dir. de memoria
    int* numero2 = new int; // Crea el puntero numero2 y le asigna una dir. de memoria
    int* suma = new int; // Crea el puntero suma y le asigna una dir. de memoria

    printf("Ingrese el primer número:\n"); // Pido el primer número
    scanf("%d", numero1); // Guardo el primer número (no se utiliza & porque numero1 ya es la dir. de memoria)
    printf("Ingrese el segundo número:\n"); // Pido el segundo número
    scanf("%d", numero2); // Guardo el segundo número (no se utiliza & porque numero2 ya es la dir. de memoria)

    *suma = *numero1 + *numero2;
    /*
    Al contenido de la dir. de memoria apuntada por suma, se le asigna la suma de los contenidos 
    apuntados por numero1 y numero2.
    */
    
    // Imprimir los contenidos de las direcciones de memoria apuntadas por numero1, numero2 y suma.
    printf("El resultado de la suma entre %d y %d es: %d\n", *numero1, *numero2, *suma);
    
    // Liberar el espacio en memoria
    delete numero1; 
    delete numero2;
    delete suma;

    return 0;
}