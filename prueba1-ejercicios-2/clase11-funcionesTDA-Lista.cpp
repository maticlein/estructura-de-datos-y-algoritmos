#include <stdio.h>
#include "../TDA-Lista-v2/lista.h"

void copiarLista(Lista origen, Lista& destino);
tipoDato menorLista(Lista lista);
void eliminarRepetidosLista(Lista& lista);

int main(){
    Lista a;
    inserta(400, 1, a);
    inserta(23, 2, a);
    inserta(35, 3, a);
    inserta(400, 4, a);
    inserta(400, 5, a);
    inserta(23, 6, a);
    inserta(23, 7, a);
    Lista b;
    copiarLista(a, b);
    printf("El menor elemento es: %d\n", menorLista(b));
    eliminarRepetidosLista(b);
    imprime(b);
    return 0;
}

void copiarLista(Lista origen, Lista& destino){
    for(int i = primero(origen) ; i < fin(origen) ; i = siguiente(i, origen)){
        tipoDato valor = recupera(i, origen);
        inserta(valor, i, destino);
    }
}

tipoDato menorLista(Lista lista){
    tipoDato minimo = recupera(primero(lista), lista);
    for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
        tipoDato valor = recupera(i, lista);
        if(valor < minimo){
            minimo = valor;
        }
    }
    return minimo;
}

void eliminarRepetidosLista(Lista& lista){
    for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
        tipoDato valor = recupera(i, lista);
        for(int j = siguiente(i, lista) ; j < fin(lista) ; j = siguiente(j, lista)){
            tipoDato elemento = recupera(j, lista);
            if(valor == elemento){
                suprime(j, lista);
                j--;
            }
        }
    }
}