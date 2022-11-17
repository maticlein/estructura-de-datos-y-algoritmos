#ifndef LISTA_VENDEDORES_STRUCT_H
#define LISTA_VENDEDORES_STRUCT_H

#include "../TDA-Lista-Clientes/listaClientesStruct.h"

struct Vendedor{
	char nombre[15];
	char apellido[15];
	ListaClientes clientes;
};

#define tipoDato Vendedor
/* Estructuras*/
struct nodoVendedor{
	tipoDato dato;
	struct nodoVendedor* next;
	nodoVendedor(){
		next=NULL;
	}
	nodoVendedor(tipoDato x){
		nodoVendedor();
		dato=x;
	}
};

struct ListaVendedores{
	struct nodoVendedor* primero;
	ListaVendedores(){
		primero=NULL;
	}
};

#endif

