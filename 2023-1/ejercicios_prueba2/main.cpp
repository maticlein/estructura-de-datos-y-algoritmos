#include <stdio.h>
#include "./TDA-Cola/cola.h"

// void eliminarParesCola(Cola &cola);
void imprimirMayoresEdad(Cola cola);
void ordenarClientesPorEdad(Cola& cola);

int main(){
    printf("Ejercicios Prueba Nº2\n");

    // // Eliminar Pares Cola
    // Cola ejemplo;
    // ponerEnCola(10, ejemplo);
    // ponerEnCola(15, ejemplo);
    // ponerEnCola(20, ejemplo);
    // ponerEnCola(25, ejemplo);
    // ponerEnCola(26, ejemplo);
    // eliminarParesCola(ejemplo);
    // imprimeCola(ejemplo);

    // Imprimir Clientes mayores de edad
    // Ordenar cola de Clientes por edad
    Cola ejemplo;
    Cliente c1 = {"Pedro", 18};
    Cliente c2 = {"David", 12};
    Cliente c3 = {"Arturo", 2};
    Cliente c4 = {"Luis", 32};
    Cliente c5 = {"Andres", 16};
    ponerEnCola(c1, ejemplo);
    ponerEnCola(c2, ejemplo);
    ponerEnCola(c3, ejemplo);
    ponerEnCola(c4, ejemplo);
    ponerEnCola(c5, ejemplo);
    
    // imprimirMayoresEdad(ejemplo);
    
    ordenarClientesPorEdad(ejemplo);
    imprimeCola(ejemplo);

    return 0;
}

// void eliminarParesCola(Cola &cola){
//     Cola aux;
//     while (!vacia(cola)){
//         tipoDato dato = frente(cola);
//         if (frente(cola) % 2 != 0){
//             ponerEnCola(dato, aux);
//         }
//         quitarDeCola(cola);
//     }
//     while (!vacia(aux)){
//         ponerEnCola(frente(aux), cola);
//         quitarDeCola(aux);
//     }
// }

void imprimirMayoresEdad(Cola cola){
    Cola aux;
    while(!vacia(cola)){
        tipoDato dato = frente(cola);
        if(dato.edad >= 18){
            printf("[%s - %d] -> ", dato.nombre, dato.edad);
        }
        ponerEnCola(dato, aux);
        quitarDeCola(cola);
    }
    while(!vacia(aux)){
        ponerEnCola(frente(aux), cola);
        quitarDeCola(aux);
    }
}

void ordenarClientesPorEdad(Cola& cola){
    Cola aux; // Para respaldar los que no son menores
    Cola resultado; // Para ir guardando los que son menores

    // La cola de resultados al final debe tener la misma cantidad de elementos que la cola original
    int num_elementos = fin(cola) - 1;
    int num_elementos_resultado = 0;

    while(num_elementos != num_elementos_resultado){
        // Se define el primer elemento como el menor
        tipoDato menor = frente(cola);
        quitarDeCola(cola);

        // Mientras haya elementos en la cola original los extraemos y los comparamos por edad, en caso de que sea menor, el que hasta ese momento era menor se envía a la cola auxiliar y se actualiza el valor del menor. En caso contrario se envía el elemento directamente a la cola auxiliar.
        while(!vacia(cola)){
            tipoDato dato = frente(cola);
            if(dato.edad < menor.edad){
                ponerEnCola(menor, aux);
                menor = dato;
                quitarDeCola(cola);
            } else {
                ponerEnCola(dato, aux);
                quitarDeCola(cola);
            }
        }

        // Cuando ya no quedan elementos en la cola original enviamos el menor a la cola de resultado, sumamos uno a la cantidad de elementos que existen en esa cola y devolvemos los elementos restantes de la cola auxiliar a la cola original para buscar el siguiente elemento
        ponerEnCola(menor, resultado);
        num_elementos_resultado++;
        while(!vacia(aux)){
            ponerEnCola(frente(aux), cola);
            quitarDeCola(aux);
        }
    }

    // Devolvemos todos los elementos desde la cola resultado a la cola original
    while(!vacia(resultado)){
        ponerEnCola(frente(resultado), cola);
        quitarDeCola(resultado);
    }
}