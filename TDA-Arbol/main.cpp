#include <stdio.h>
#include "arbol.h"

int main(){
    Arbol n1 = creaRaiz(1);
	Arbol n2 = creaRaiz(2);
	Arbol n3 = creaRaiz(3);
	Arbol n4 = creaRaiz(4);
	Arbol n5 = creaRaiz(5);
	Arbol n6 = creaRaiz(6);
	Arbol n7 = creaRaiz(7);
	Arbol n8 = creaRaiz(8);
	Arbol n9 = creaRaiz(9);
	Arbol n10 = creaRaiz(10);
	
	insertaHijoMasIzq(n1,n2);
	n2 = hijoMasIzq(n1);
	insertaHermanoDer(n2,n3);
	n3 = hermanoDer(n2);
	insertaHermanoDer(n3,n4);
	n4 = hermanoDer(n3);
	insertaHijoMasIzq(n3,n5);
	n5 = hijoMasIzq(n3);
	insertaHermanoDer(n5,n6);
	n6 = hermanoDer(n5);
	insertaHijoMasIzq(n4,n7);
	n7 = hijoMasIzq(n4);
	insertaHijoMasIzq(n5,n8);
	n8 = hijoMasIzq(n5);
	insertaHermanoDer(n8,n9);
	n9 = hermanoDer(n8);
	insertaHijoMasIzq(n6,n10);
	n10 = hijoMasIzq(n6);

    tipoDato b = recupera(3,n1.primero->dato.hijos);
	
	imprime(n1.primero->dato.hijos);
	imprime(b.hijos);
    return 0;
}