#include <stdio.h>

int main(){
    FILE* archivo = fopen("./mensajes.txt", "w");
    fprintf(archivo, "Hola");
    fclose(archivo);
    return 0;
}