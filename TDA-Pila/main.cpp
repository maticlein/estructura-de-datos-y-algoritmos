#include <stdio.h>
#include "pila.h"

int main(){
    Pila pila;
    push(2, pila);
    push(10, pila);
    push(12, pila);
    push(26, pila);
    pop(pila);
    imprimePila(pila);
    return 0;
}