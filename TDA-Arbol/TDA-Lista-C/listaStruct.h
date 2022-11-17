#ifndef LISTA_STRUCT_H
#define LISTA_STRUCT_H

#define datoArbol int
#define tipoDato nodoArbol

struct Lista{
	struct nodo* primero;
	Lista(){
		primero = NULL;
	}
};

struct Arbol:Lista{};

struct nodoArbol {
	datoArbol dato;
	Arbol hijos;
};

struct nodo{
	tipoDato dato;
	struct nodo* next;
	nodo(){
		next = NULL;
	}
	nodo(tipoDato x){
		nodo();
		dato = x;
	}
};

#endif