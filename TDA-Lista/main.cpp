#include <stdio.h>
#include "lista.h"

int main(){
    printf("TDA de Lista\n");
    Lista lista = NULL;
    anula(lista);
    if(vacia(lista)){
        printf("La lista está vacía!\n");
    }

    // if(vacia(lista)){
    //     printf("La lista está vacía\n");
    // } else {
    //     printf("Hay elementos\n");
    // }

    // inserta(5, 1, lista);
    // inserta(10, 2, lista);
    // inserta(20, 3, lista);
    // inserta(30, 4, lista);
    // inserta(40, 5, lista);
    // inserta(50, 6, lista);

    // anula(lista);
    
    // if(vacia(lista)){
    //     printf("La lista está vacía\n");
    // } else {
    //     printf("Hay elementos\n");
    // }

    //imprimeLista(lista);

    // int posicion = localiza(400, lista);
    // if(posicion == fin(lista)){
    //     printf("El elemento no se encuentra.\n");
    // } else {
    //     printf("El elemento se encuentra en la posición %d\n", posicion);
    // }

    return 0;
}