#include <stdio.h>

int main(){
    FILE* archivo;
    
    char nombre[15];
    char apellido[15];
    char clave[5];
    int opcion;

    printf("1.- Registrar un cliente\n");
    printf("2.- Leer un cliente\n");
    printf("Ingrese una opción:\n");
    scanf("%d", &opcion);

    switch(opcion){
        case 1: archivo = fopen("clientes.txt", "a+");
                printf("Ingrese su nombre:\n");
                scanf("%s", nombre);
                printf("Ingrese su apellido:\n");
                scanf("%s", apellido);
                printf("Ingrese su clave:\n");
                scanf("%s", clave);
                fprintf(archivo, "%s %s %s\n", nombre, apellido, clave);
                printf("Cliente registrado correctamente!\n");
                break;
        case 2: archivo = fopen("clientes.txt", "r");
                fscanf(archivo, "%s %s %s", nombre, apellido, clave);
                printf("%s %s %s\n", nombre, apellido, clave);
                break;
        default: printf("La opción ingresada no es válida.\n");
    }


    // for(int i = 0 ; i < 5 ; i++){
    //     printf("Registro cliente %d\n", i + 1);
    //     printf("Ingrese su nombre:\n");
    //     scanf("%s", nombre);
    //     printf("Ingrese su apellido:\n");
    //     scanf("%s", apellido);
    //     printf("Ingrese su clave:\n");
    //     scanf("%s", clave);
        
    //     fprintf(archivo, "%s %s %s\n", nombre, apellido, clave);
    //     printf("Cliente registrado correctamente!\n");
    // }

    fclose(archivo);    

    return 0;
}