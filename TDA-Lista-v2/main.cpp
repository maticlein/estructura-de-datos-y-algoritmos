#include <stdio.h>
#include "lista.h"
#include <string.h>

void copiarLista(Lista original, Lista &copia);
void eliminaPares(Lista &lista);
void ordenarLista(Lista &lista);

int posicionMayor(Lista lista);

int main(){
    Lista listaOriginal;

    inserta(5, 1, listaOriginal);
    inserta(2, 2, listaOriginal);
    inserta(4, 3, listaOriginal);
    inserta(3, 4, listaOriginal);
    inserta(1, 5, listaOriginal);
    
    eliminaPares(listaOriginal);
    ordenarLista(listaOriginal);
    imprime(listaOriginal);

    printf("posicionMayor() -> %d\n", posicionMayor(listaOriginal));

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

void ordenarLista(Lista &lista){
    Lista aux;
    int pos = 0;
    while(!vacia(lista)){
        tipoDato minimo = recupera(primero(lista), lista);
        for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
            tipoDato dato = recupera(i, lista);
            if(dato <= minimo){
                minimo = dato;
                pos = i;
            }
        }
        inserta(minimo, fin(aux), aux);
        suprime(pos, lista);
    }
    while(!vacia(aux)){
        inserta(recupera(primero(aux), aux), fin(lista), lista);
        suprime(primero(aux), aux);
    }
}

int posicionMayor(Lista lista){
    int pos = 1;
    tipoDato mayor = recupera(primero(lista), lista);
    for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
        tipoDato dato = recupera(i, lista);
        if(dato > mayor){
            pos = i;
        }
    }
    return pos;
}