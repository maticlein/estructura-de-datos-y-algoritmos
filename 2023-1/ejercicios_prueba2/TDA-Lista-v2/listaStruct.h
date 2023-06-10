#ifndef LISTA_STRUCT_H
#define LISTA_STRUCT_H

struct Cliente{
	char nombre[15];
	int edad;
};

#define tipoDato Cliente
/* Estructuras*/
struct nodo{
	tipoDato dato;
	struct nodo* next;
	nodo(){
		next=NULL;
	}
	nodo(tipoDato x){
		nodo();
		dato=x;
	}
};

struct Lista{
	struct nodo* primero;
	Lista(){
		primero=NULL;
	}
};

#endif

