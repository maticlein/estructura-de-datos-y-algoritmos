#include <stdio.h>

int main(){
    char nombre[10];
    char apellido[10];
    FILE* archivo = fopen("./mensajes.txt", "r");
    fscanf(archivo, "%s %s\n", nombre, apellido);
    printf("%s %s\n", nombre, apellido);
    // fprintf(stdout, "%s\n", mensaje);
    fclose(archivo);
    return 0;
}