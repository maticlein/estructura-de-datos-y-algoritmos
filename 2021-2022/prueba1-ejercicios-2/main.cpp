#include <stdio.h>
#include "../TDA-Lista-v2/lista.h"

void dividirLista(Lista lista, Lista& frente, Lista& fondo);
Lista unirListasOrdenadas(Lista lista1, Lista lista2);
void mergeSort(Lista& lista);

int main(){
    Lista lista;
    inserta(38, 1, lista);
    inserta(27, 2, lista);
    inserta(43, 3, lista);
    inserta(3, 4, lista);
    inserta(9, 5, lista);
    inserta(82, 6, lista);
    inserta(10, 7, lista);
    mergeSort(lista);
    imprime(lista);
    return 0;
}

void dividirLista(Lista lista, Lista& frente, Lista& fondo){
    nodo* ptr1;
    nodo* ptr2;
    ptr2 = lista.primero;
    ptr1 = lista.primero->next;

    while(ptr1 != NULL){
        ptr1 = ptr1->next;
        if(ptr1 != NULL){
            ptr2 = ptr2->next;
            ptr1 = ptr1->next;
        }
    }

    frente.primero = lista.primero;
    fondo.primero = ptr2->next;
    ptr2->next = NULL;
}

Lista unirListasOrdenadas(Lista lista1, Lista lista2){
    Lista aux;
    Lista temp;
    Lista resultado;

    if(lista1.primero == NULL){
        return lista2;
    } else if(lista2.primero == NULL){
        return lista1;
    }

    if(lista1.primero->dato <= lista2.primero->dato){
        resultado.primero = lista1.primero;
        aux.primero = lista1.primero->next;
        temp = unirListasOrdenadas(aux, lista2);
        resultado.primero->next = temp.primero;
    } else {
        resultado.primero = lista2.primero;
        aux.primero = lista2.primero->next;
        temp = unirListasOrdenadas(lista1, aux);
        resultado.primero->next = temp.primero;
    }    

    return resultado;
}

void mergeSort(Lista& lista){
    Lista aux1;
    Lista aux2;

    if((lista.primero == NULL) || (lista.primero->next == NULL)){
        return;
    }

    dividirLista(lista, aux1, aux2);
    mergeSort(aux1);
    mergeSort(aux2);
    lista = unirListasOrdenadas(aux1, aux2); 
}