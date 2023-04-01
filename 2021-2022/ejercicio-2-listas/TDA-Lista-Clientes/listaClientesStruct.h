#ifndef LISTA_CLIENTES_STRUCT_H
#define LISTA_CLIENTES_STRUCT_H

struct Cliente{
	char nombre[15];
	char apellido[15];
};

#define tipoDatoCliente Cliente
/* Estructuras*/
struct nodoCliente{
	tipoDatoCliente dato;
	struct nodoCliente* next;
	nodoCliente(){
		next=NULL;
	}
	nodoCliente(tipoDatoCliente x){
		nodoCliente();
		dato=x;
	}
};

struct ListaClientes{
	struct nodoCliente* primero;
	ListaClientes(){
		primero=NULL;
	}
};

#endif