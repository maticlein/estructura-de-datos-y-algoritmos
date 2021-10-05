#include <stdio.h>
#include "lista.h"

int main(){
    printf("Test del TDA de Lista\n");
    Lista lista = NULL;
    anula(lista);
    if(vacia(lista)){
        printf("La lista está vacía!\n");
    }

    // Lista lista = NULL;
    // inserta(10, 1, lista);
    // inserta(20, 2, lista);
    // inserta(30, 3, lista);
    // inserta(40, 4, lista);
    // inserta(50, 5, lista);
    // inserta(60, 2, lista);

    // if(vacia(lista)){
    //     printf("La lista está vacía!\n");
    // } else {
    //     printf("La lista no está vacía!\n");
    // }

    // imprimeLista(lista);

    // int posicion = localiza(30, lista);
    // if(posicion == fin(lista)){
    //     printf("El elemento no se encuentra.\n");
    // } else {
    //     printf("El elemento se encuentra en la posición %d\n", posicion);
    // }
    return 0;
}