#ifndef LISTA_CLIENTES_STRUCT_H
#define LISTA_CLIENTES_STRUCT_H

struct Cliente{
	char nombre[20];
	// int edad;
	// long telefono; 
	// char direccion[40]; 
	char ciudad[20]; 
	// int region;
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

struct ListaClientes{
	struct nodo* primero;
	ListaClientes(){
		primero=NULL;
	}
};

#endif

