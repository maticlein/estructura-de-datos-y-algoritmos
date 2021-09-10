#include <stdio.h>

int main(){
    FILE* archivo = fopen("archivoBinario.bin", "rb");
    char mensaje[30];
    fread(mensaje, sizeof(mensaje), 1, archivo);
    printf("%s\n", mensaje);
    fclose(archivo);
    return 0;
}