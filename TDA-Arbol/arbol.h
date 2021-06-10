#include "arbolStruct.h"
#include "./TDA-Lista/lista.h"

// Prototipos

// Martes 08/06
Arbol creaRaiz(datoArbol u);
Arbol& listaHijos(Arbol n);
void insertaHijoMasIzq(Arbol& n, Arbol& Ti);
void insertaHermanoDer(Arbol& n, Arbol& Td);
Arbol raiz(Arbol raiz);
Arbol hijoMasIzq(Arbol n);
Arbol hermanoDer(Arbol n);
datoArbol etiqueta(Arbol n);

// Jueves 10/06
bool esHoja(Arbol n);
bool esNulo(Arbol n);
bool esHijo(Arbol n, Arbol padre);
Arbol padre(Arbol n, Arbol raiz);
void reEtiqueta(datoArbol e, Arbol & n, Arbol raiz);
void anula(Arbol &raiz);
Arbol podarHijoMasIzq(Arbol n);
Arbol podarHermanoDer(Arbol n);