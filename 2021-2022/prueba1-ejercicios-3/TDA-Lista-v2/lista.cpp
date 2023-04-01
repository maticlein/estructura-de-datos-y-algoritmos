#include <stdio.h>
#include "lista.h"

// Viernes 10/06
bool vacia(Lista lista){
	return fin(lista)==primero(lista);
}

int primero(Lista lista){
	return 1;
}

int anterior(int p, Lista lista){
	return p-1;
}

int siguiente(int p, Lista lista){
	return p+1;
}

// Martes 14/06
int fin(Lista lista){
	int c=1;
	nodo*aux = lista.primero;
	while(aux!=NULL){
		aux = aux->next;
		c++;
	}
	return c;
}

void inserta(tipoDato x, int p, Lista &lista){
	nodo* nuevo = new nodo(x);
	nodo* aux = lista.primero;
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

tipoDato recupera(int p, Lista lista){
	nodo* aux = lista.primero;
	for(int i = 1 ; i < p ; i++){
		aux = aux->next;
	}
	return aux->dato;
}

int localiza(tipoDato x , Lista lista){
	for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
		if(recupera(i, lista) == x){
			return i;
		}
	}
	return fin(lista);
}
 

// Viernes 17/06

void imprime(Lista lista){
	for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
		tipoDato x = recupera(i,lista);
		printf("[%d]-> ", x);
	}
	printf("*\n");
}

void suprime(int p, Lista &lista){
	nodo* aux = lista.primero;
	if(p == primero(lista)){
		lista.primero = aux->next;
	} else {
		nodo* aux2 = lista.primero;
		for(int i = 0 ; i < p - 2 ; i++){
			aux2 = aux2->next;
		}
		aux = aux2->next;
		aux2->next = aux->next;
	}
	aux->next = NULL;
	delete aux;
}

void anula(Lista &lista){
	while(!vacia(lista))
		suprime(primero(lista),lista);
}