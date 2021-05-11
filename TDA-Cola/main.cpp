#include <stdio.h>
#include "cola.h"

void anulaParesEnCola(Cola &cola);

int main(){
    Cola c;
    ponerEnCola(2, c);
    ponerEnCola(15, c);
    ponerEnCola(50, c);
    ponerEnCola(78, c);
    ponerEnCola(8, c);
    ponerEnCola(19, c);
    anulaParesEnCola(c);
    imprimeCola(c);
    return 0;
}

void anulaParesEnCola(Cola &cola){
    if(vacia(cola)){
        printf("La cola está vacía.\n");
        return;
    }
    printf("Anulando números pares....\n");
    Cola aux;
    while(!vacia(cola)){
        // Obtener el primer elemento de la cola original
        tipoDato x = frente(cola);
        // Verificar si es par o impar
        // Si es par, eliminar, sino guardar en la cola aux
        
        if(x%2 != 0){
            // IMPAR
            ponerEnCola(x, aux);
        } 
        quitarDeCola(cola);
    }
    // Recuperar elementos desde la cola aux
    while(!vacia(aux)){
        tipoDato x = frente(aux);
        ponerEnCola(x, cola);
        quitarDeCola(aux);
    }
}