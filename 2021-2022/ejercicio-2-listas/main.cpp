#include <stdio.h>
#include "./TDA-Lista-Vendedores/listaVendedores.h"
#include "./TDA-Lista-Clientes/listaClientes.h"

int main(){
    printf("Compilado OK!\n");
    ListaVendedores vendedores;
    Vendedor vendedor1 = {"Matthias", "Clein"};
    Cliente cliente = {"Hola", "Mundo"};
    Cliente cliente1 = {"Martín", "Canario"};
    inserta(cliente, 1, vendedor1.clientes);
    inserta(cliente1, 2, vendedor1.clientes);
    inserta(vendedor1, primero(vendedores), vendedores);

    Vendedor ejemplo = recupera(1, vendedores);
    imprimeClientes(ejemplo.clientes);

    return 0;
}