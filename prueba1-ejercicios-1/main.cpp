#include <stdio.h>
#include "../TDA-Lista-v2/lista.h"

void copiarLista(Lista origen, Lista& destino);
tipoDato menorLista(Lista lista);
void eliminarRepetidosLista(Lista& lista);

int main(){
    Lista lista1;
    Lista lista2;
    printf("Ejercicios Prueba 1 - Clase 1\n");
    inserta(5, 1, lista1);
    inserta(2, 2, lista1);
    inserta(3, 3, lista1);
    inserta(9, 4, lista1);
    inserta(5, 5, lista1);
    inserta(2, 6, lista1);
    inserta(5, 7, lista1);
    inserta(2, 8, lista1);
    inserta(3, 9, lista1);
    inserta(9, 10, lista1);
    inserta(5, 11, lista1);
    inserta(2, 12, lista1);
    printf("Lista 1:\n");
    imprime(lista1);
    copiarLista(lista1, lista2);
    printf("Lista 2:\n");
    imprime(lista2);
    printf("El menor de la lista es: %d\n", menorLista(lista1));
    eliminarRepetidosLista(lista1);
    imprime(lista1);
    return 0;
}

void copiarLista(Lista origen, Lista& destino){
    for(int i = primero(origen) ; i < fin(origen); i = siguiente(i, origen)){
        tipoDato dato = recupera(i, origen);
        inserta(dato, i, destino);       
    }
}

tipoDato menorLista(Lista lista){
    tipoDato minimo = recupera(primero(lista), lista);
    for(int i = siguiente(primero(lista), lista) ; i < fin(lista); i = siguiente(i, lista)){
        tipoDato dato = recupera(i, lista);
        if(dato < minimo){
            minimo = dato;
        }
    }
    return minimo;
}

void eliminarRepetidosLista(Lista& lista){
    for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
        tipoDato original = recupera(i, lista);
        for(int j = siguiente(i, lista) ; j < fin(lista) ; j = siguiente(j, lista)){
            tipoDato dato = recupera(j, lista);
            if(original == dato){
                suprime(j, lista);
                j--;
            }
        }
    }
}