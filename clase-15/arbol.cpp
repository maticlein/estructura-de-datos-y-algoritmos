#include "arbol.h"
#include <stdio.h>

// Implementaciones
Arbol creaRaiz(datoArbol u){
    Arbol r;
    tipoDato n;
    n.dato = u;
    inserta(n, primero(r), r);
    return r;
}

Arbol& listaHijos(Arbol n) {
    return n.primero->dato.hijos;
}

void insertaHijoMasIzq(Arbol& n, Arbol& Ti){
    Arbol& hijos = listaHijos(n);
    tipoDato raizTi = recupera(primero(Ti), Ti);
    inserta(raizTi, primero(hijos), hijos);
    anula((Lista&)Ti);
}

void insertaHermanoDer(Arbol& n, Arbol& Td){
    tipoDato raizTd = recupera(primero(Td), Td);
    inserta(raizTd, siguiente(primero(n), n), n);
    anula((Lista&)Td);
}

Arbol raiz(Arbol raiz){
    return raiz;
}

Arbol hijoMasIzq(Arbol n){
    tipoDato contenido = recupera(primero(n), n);
    return contenido.hijos;
}

Arbol hermanoDer(Arbol n) {
    Arbol r;
    r.primero = n.primero->next;
    return r;
}

datoArbol etiqueta(Arbol n){
    tipoDato contenido = recupera(primero(n), n);
    datoArbol dato = contenido.dato;
    return dato;
}