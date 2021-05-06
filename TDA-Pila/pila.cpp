#include "pila.h"
#include <stdio.h>

bool vacia(Pila pila){
    return vacia((Lista)pila);
}

void push(tipoDato x, Pila &pila){
    inserta(x, primero((Lista)pila), (Lista&)pila);
}

void pop(Pila &pila){
    suprime(primero((Lista)pila), (Lista&)pila);
}

tipoDato top(Pila pila){
    return recupera(primero((Lista)pila), (Lista)pila);
}

void anula(Pila &pila){
    while(!vacia(pila)){
        pop(pila);
    }
}

void imprimePila(Pila pila){
    if(vacia(pila)){
        printf("Pila está vacía.\n");
        return;
    }
    Pila aux;
    printf("Pila:\n");
    while(!vacia(pila)){
        tipoDato x = top(pila);
        printf("%d\n", x);
        push(x, aux);
        pop(pila);
    }
    while(!vacia(aux)){
        push(top(aux), pila);
        pop(aux);
    }
}