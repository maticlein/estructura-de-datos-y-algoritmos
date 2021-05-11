#include "cola.h"
#include <stdio.h>

// Implementaciones
bool vacia(Cola cola){
    return vacia((Lista)cola);
}

tipoDato frente(Cola cola){
    return recupera(primero((Lista)cola), (Lista)cola);
}

void ponerEnCola(tipoDato x, Cola &cola){
    inserta(x, fin((Lista)cola), (Lista&)cola);
}

void quitarDeCola(Cola &cola){
    // ELIMINAR EL PRIMER ELEMENTO
    suprime(primero((Lista)cola), (Lista&)cola);
}

void anula(Cola &cola){
    if(vacia(cola)){
        printf("La cola ya se encuentra vacía.\n");
        return;
    }

    while(!vacia(cola)){
        quitarDeCola(cola);
    }
}

void imprimeCola(Cola cola){
    // Validación de cantidad de elementos
    if(vacia(cola)){
        printf("La cola se encuentra vacía.\n");
        return;
    }
    
    Cola aux;

    // Recorrer la cola original
    while(!vacia(cola)){
        // conocer el primer valor
        tipoDato x = frente(cola);
        // imprimir valor
        printf("%d -> ", x);
        // dejar el valor en cola aux
        ponerEnCola(x, aux);
        // sacar el valor de la cola original
        quitarDeCola(cola);
    }

    printf("\n");

    // Devolver los elementos a la cola original
    while(!vacia(aux)){
        // conocer el primer valor
        tipoDato x = frente(aux);
        // dejar el valor en cola original
        ponerEnCola(x, cola);
        // sacar el valor de la cola aux
        quitarDeCola(aux); 
    }
}

