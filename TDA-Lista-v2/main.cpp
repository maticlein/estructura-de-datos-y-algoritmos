#include <stdio.h>
#include "lista.h"
#include <string.h>

void copiarLista(Lista original, Lista &copia);
void eliminaPares(Lista &lista);

int main(){
    Lista listaOriginal;

    inserta(1, 1, listaOriginal);
    inserta(2, 2, listaOriginal);
    inserta(3, 3, listaOriginal);
    inserta(4, 4, listaOriginal);
    inserta(5, 5, listaOriginal);
    
    imprime(listaOriginal);
    eliminaPares(listaOriginal);
    imprime(listaOriginal);
    return 0;
}

void copiarLista(Lista original, Lista &copia){
    for(int i = primero(original) ; i < fin(original) ; i = siguiente(i, original)){
        tipoDato dato = recupera(i, original);
        inserta(dato, i, copia);
    }
}

void eliminaPares(Lista &lista){
    for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
        tipoDato dato = recupera(i, lista);
        if(dato % 2 == 0){
            suprime(i, lista);
            i--;
        }
    }
}