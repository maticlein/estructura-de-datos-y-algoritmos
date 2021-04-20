#include <stdio.h>
#include <string.h>

struct Cliente{
    char nombre[15];
    char apellido[20];
    char rut[15];
    int clave;
    char mail[50];
    char direccion[70];
    long telefono;
};

void ingresarCliente(Cliente* a);
Cliente crearCliente(); 

int main(){
    Cliente cliente;
    ingresarCliente(&cliente);
    printf("%s\n", cliente.nombre);
    printf("%d\n", cliente.clave);
    Cliente nuevo = crearCliente();
    printf("%s\n", nuevo.nombre);
    printf("%d\n", nuevo.clave);
    return 0;
}

void ingresarCliente(Cliente* a){
    printf("Ingrese su nombre:\n");
    scanf("%s", a->nombre);
    printf("Ingrese su apellido:\n");
    scanf("%s", a->apellido);
    printf("Ingrese su rut");
    scanf("%s", a->rut);
    printf("Ingrese su clave:\n");
    scanf("%d", &(a->clave));
    printf("Ingrese su email:\n");
    scanf("%s", a->mail);
    printf("Ingrese su dirección:\n");
    scanf("%s", a->direccion);
    printf("Ingrese su teléfono:\n");
    scanf("%lu", &(a->telefono));
}

Cliente crearCliente(){
    Cliente a;
    printf("Ingrese su nombre:\n");
    scanf("%s", a.nombre);
    printf("Ingrese su apellido:\n");
    scanf("%s", a.apellido);
    printf("Ingrese su rut");
    scanf("%s", a.rut);
    printf("Ingrese su clave:\n");
    scanf("%d", &(a.clave));
    printf("Ingrese su email:\n");
    scanf("%s", a.mail);
    printf("Ingrese su dirección:\n");
    scanf("%s", a.direccion);
    printf("Ingrese su teléfono:\n");
    scanf("%lu", &(a.telefono));
    return a;
}
