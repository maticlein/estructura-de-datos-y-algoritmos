#include <stdio.h>
#include <string.h>
#include "./TDA-Clientes/lista.h"

void buscarPorCiudad(char ciudad[20], ListaClientes lista);

int main(){
    ListaClientes lista;
    Cliente a = {"Martin", "Temuco"};
    Cliente b = {"Nicolas", "Santiago"};
    Cliente c = {"Roberto", "Temuco"};
    Cliente d = {"Diego", "Concepción"};
    inserta(a, 1, lista);
    inserta(b, 2, lista);
    inserta(c, 3, lista);
    inserta(d, 4, lista);
    char ciudadPrueba[20] = "Concepción";
    buscarPorCiudad(ciudadPrueba, lista);
    return 0;
}

void buscarPorCiudad(char ciudad[20], ListaClientes lista){
    for(int i = primero(lista) ; i < fin(lista) ; i = siguiente(i, lista)){
        Cliente persona = recupera(i, lista);
        if(strcmp(ciudad, persona.ciudad) == 0){
            printf("%s\n", persona.nombre);
        }
    }
}