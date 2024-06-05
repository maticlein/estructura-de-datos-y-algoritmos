#include <stdio.h>
#include "pila.h"

void suprimirElemento(Pila& pila, int pos);
void ordenarPila(Pila& pila);

int main(){
    Pila pila;
    push(2, pila);
    push(10, pila);
    push(12, pila);
    push(26, pila);
    push(16, pila);
    push(3, pila);
    push(18, pila);
    ordenarPila(pila);
    imprimePila(pila);
    return 0;
}


void suprimirElemento(Pila& pila, int pos){
    Pila aux;
    if(pos == 1){
        pop(pila);
    } else{
        for(int i = 1 ; i < pos ; i++){
            tipoDato x = top(pila);
            push(x, aux);
            pop(pila);
        }
        pop(pila);
        while(!vacia(aux)){
            push(top(aux), pila);
            pop(aux);
        }
    }
}

void ordenarPila(Pila& p){
    Pila aux;
    Pila resultado;
    while(!vacia(p)){
        tipoDato minimo = top(p);
        while(!vacia(p)){
            tipoDato datos = top(p);
            if(datos < minimo){
                minimo = datos;
            }
            push(datos, aux);
            pop(p);
        }
        push(minimo, resultado);
        while(!vacia(aux)){
            if(top(aux) != minimo){
                push(top(aux), p);
            }
            pop(aux);
        }
    }

    while(!vacia(resultado)){
        push(top(resultado), p);
        pop(resultado);
    }
    
}