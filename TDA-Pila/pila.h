#include <stdio.h>
#include "../TDA-Lista-v2/lista.h"
#include "pilaStruct.h"

bool vacia(Pila pila);
void push(tipoDato x, Pila &pila);
void pop(Pila &pila);
tipoDato top(Pila pila);
void anula(Pila &pila);
void imprimePila(Pila pila);