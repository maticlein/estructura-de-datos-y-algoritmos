#include <stdio.h>
#include "./TDA-Lista-v2/lista.h"
#include "./TDA-Clientes/lista.h"

// Prototipos
void copiarLista(Lista original, Lista& copia);
tipoDato menorLista(Lista lista);
tipoDato mayorLista(Lista lista);
void eliminarRepetidos(Lista& lista);

int main(){
    printf("Clase de ejercicios!\n");
    Lista lista;
    inserta(20, 1, lista);
    inserta(20, 2, lista);
    inserta(30, 3, lista);
    inserta(20, 4, lista);
    inserta(20, 5, lista);
    inserta(30, 6, lista);
    imprime(lista);
    // Lista nueva;
    // copiarLista(lista, nueva);
    // imprime(nueva);
    // if(menorLista(lista) == NULL){
    //     printf("lista vacía\n");
    // } else {
    //     printf("Valor mínimo: %d\n", menorLista(lista));
    //     printf("Valor máximo: %d\n", mayorLista(lista));
    // }
    eliminarRepetidos(lista);
    imprime(lista);
    return 0;
}

// Implementaciones
void copiarLista(Lista original, Lista& copia){
    for(int i = primero(original) ; i < fin(original) ; i = siguiente(i, original)){
        // tipoDato dato = recupera(i, original);
        inserta(recupera(i, original), i, copia);
    }
}

tipoDato menorLista(Lista lista){
    if(vacia(lista)){
        printf("La lista está vacía!\n");
        return NULL;
    } else {
        tipoDato minimo = recupera(primero(lista), lista);
        for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
            tipoDato dato = recupera(i, lista);
            if(dato < minimo){
                minimo = dato;
            }
        }
        return minimo;
    }
}

tipoDato mayorLista(Lista lista){
    if(vacia(lista)){
        printf("La lista está vacía!\n");
        return NULL;
    } else {
        tipoDato maximo = recupera(primero((Lista)lista), (Lista)lista);
        for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
            tipoDato dato = recupera(i, lista);
            if(dato > maximo){
                maximo = dato;
            }
        }
        return maximo;
    }
}

void eliminarRepetidos(Lista& lista){
    Lista aux = lista;
    if(vacia(lista)){
        printf("La lista está vacía!\n");
        return;
    } else {
        for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
            tipoDato objetivo = recupera(i, lista);
            for(int j = siguiente(i, lista) ; j < fin(lista) ; j = siguiente(j, lista)){
                tipoDato valor = recupera(j, lista);
                if(objetivo == valor){
                    printf("Eliminando...\n");
                    suprime(j, lista);
                    j--;
                } else {
                    printf("No es el mismo valor!\n");
                }
            }
        }
    }

}