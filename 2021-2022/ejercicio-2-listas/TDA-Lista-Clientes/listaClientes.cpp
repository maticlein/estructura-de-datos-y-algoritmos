#include <stdio.h>
#include "listaClientes.h"

// Viernes 10/06
bool vacia(ListaClientes lista){
	return fin(lista)==primero(lista);
}

int primero(ListaClientes lista){
	return 1;
}

int anterior(int p, ListaClientes lista){
	return p-1;
}

int siguiente(int p, ListaClientes lista){
	return p+1;
}

// Martes 14/06
int fin(ListaClientes lista){
	int c=1;
	nodoCliente*aux = lista.primero;
	while(aux!=NULL){
		aux = aux->next;
		c++;
	}
	return c;
}

void inserta(tipoDatoCliente x, int p, ListaClientes &lista){
	nodoCliente* nuevo = new nodoCliente(x);
	nodoCliente* aux = lista.primero;
	if(p == primero(lista)){
		nuevo->next = lista.primero;
		lista.primero = nuevo;
	}else{
		for(int i = 0 ; i < p - 2 ; i++){
			aux = aux->next;
		}
		nuevo->next = aux->next;
		aux->next = nuevo;
	}
}

tipoDatoCliente recupera(int p, ListaClientes lista){
	nodoCliente* aux = lista.primero;
	for(int i = 1 ; i < p ; i++){
		aux = aux->next;
	}
	return aux->dato;
}

// int localiza(tipoDato x , ListaClientes lista){
// 	for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
// 		if(recupera(i, lista) == x){
// 			return i;
// 		}
// 	}
// 	return fin(lista);
// }
 

// Viernes 17/06

void imprimeClientes(ListaClientes lista){
	for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
		tipoDatoCliente x = recupera(i,lista);
		printf("%s %s -> ", x.nombre, x.apellido);
	}
	printf("*\n");
}

void suprime(int p, ListaClientes &lista){
	nodoCliente* aux = lista.primero;
	if(p == primero(lista)){
		lista.primero = aux->next;
	} else {
		nodoCliente* aux2 = lista.primero;
		for(int i = 0 ; i < p - 2 ; i++){
			aux2 = aux2->next;
		}
		aux = aux2->next;
		aux2->next = aux->next;
	}
	aux->next = NULL;
	delete aux;
}

void anula(ListaClientes &lista){
	while(!vacia(lista))
		suprime(primero(lista),lista);
}