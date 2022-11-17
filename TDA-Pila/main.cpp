#include <stdio.h>
#include "pila.h"

void suprimirElemento(Pila& pila, int pos);

int main(){
    Pila pila;
    push(2, pila);
    push(10, pila);
    push(12, pila);
    push(26, pila);
    push(16, pila);
    push(3, pila);
    push(18, pila);
    suprimirElemento(pila, 5);
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