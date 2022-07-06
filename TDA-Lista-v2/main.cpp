#include <stdio.h>
#include "lista.h"
#include <string.h>

// void copiarLista(Lista original, Lista &copia);
int menorElemento(Lista lista);
void buscarPorCiudad(Lista lista, char ciudad[]);

int main(){
    // Lista listaOriginal;
    // Lista listaCopia;

    // inserta(10, 1, listaOriginal);
    // inserta(2, 2, listaOriginal);
    // inserta(30, 3, listaOriginal);
    // inserta(-4, 4, listaOriginal);
    // inserta(5, 5, listaOriginal);

    // imprime(listaCopia);
    // copiarLista(listaOriginal, listaCopia);
    // printf("Original: ");
    // imprime(listaOriginal);
    // printf("Copia: ");
    // imprime(listaCopia);

    // printf("MENOR VALOR: %d\n", menorElemento(listaOriginal));

    tipoDato cliente1;
    strcpy(cliente1.nombre, "Felipe");
    strcpy(cliente1.ciudad, "Temuco");
    cliente1.edad = 78;

    tipoDato cliente2;
    strcpy(cliente2.nombre, "Pablo");
    strcpy(cliente2.ciudad, "Arica");
    cliente2.edad = 10;

    tipoDato cliente3;
    strcpy(cliente3.nombre, "Benjamin");
    strcpy(cliente3.ciudad, "Osorno");
    cliente3.edad = 10;

    tipoDato cliente4;
    strcpy(cliente4.nombre, "Cristopher");
    strcpy(cliente4.ciudad, "La Serena");
    cliente4.edad = 10;

    tipoDato cliente5;
    strcpy(cliente5.nombre, "Tomás");
    strcpy(cliente5.ciudad, "Temuco");
    cliente5.edad = 10;

    Lista ejemplo;
    inserta(cliente1, 1, ejemplo);
    inserta(cliente2, 2, ejemplo);
    inserta(cliente3, 3, ejemplo);
    inserta(cliente4, 4, ejemplo);
    inserta(cliente5, 5, ejemplo);
    // imprime(ejemplo);

    char filtro[] = "Osorno";

    printf("EDAD MENOR CLIENTE: %d\n", menorElemento(ejemplo));
    buscarPorCiudad(ejemplo, filtro);
    return 0;
}

// void copiarLista(Lista original, Lista &copia){
//     for(int i = primero(original) ; i < fin(original) ; i = siguiente(i, original)){
//         tipoDato dato = recupera(i, original);
//         inserta(dato, i, copia);
//     }
// }

int menorElemento(Lista lista){
    tipoDato menorCliente = recupera(1, lista);
    int edadMenorCliente = menorCliente.edad;
    // int menor = recupera(1, lista).edad;
    for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
        tipoDato dato = recupera(i, lista);
        if(dato.edad < edadMenorCliente){
            edadMenorCliente = dato.edad;
        }
    }
    return edadMenorCliente;
}

void buscarPorCiudad(Lista lista, char ciudad[]){
    //PASAR POR TODOS LOS CLIENTES
    for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
        //OBTENGO LA INFORMACIÓN
        tipoDato dato = recupera(i, lista);
        //COMPARAR CON LA CIUDAD SOLICITADA
        if(strcmp(dato.ciudad, ciudad) == 0){
            //SÍ: IMPRIME
            printf("%s\n", dato.nombre); 
        }
        //NO: NADA   
    }
         
}