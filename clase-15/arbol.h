#include "arbolStruct.h"
#include "./TDA-Lista/lista.h"

// Prototipos
Arbol creaRaiz(datoArbol u);
Arbol& listaHijos(Arbol n);
void insertaHijoMasIzq(Arbol& n, Arbol& Ti);
void insertaHermanoDer(Arbol& n, Arbol& Td);
Arbol raiz(Arbol raiz);
Arbol hijoMasIzq(Arbol n);
Arbol hermanoDer(Arbol n);
datoArbol etiqueta(Arbol n);