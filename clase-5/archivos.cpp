#include <stdio.h>

int main(){
    fprintf(stdout, "Hola mundo %d\n", 5);
    /*
    FILE* archivo = fopen("archivo.txt","w");
    fprintf(archivo, "- - Clase Archivos - - \n");
    fprintf(archivo, "-----------\n");
    fclose(archivo);
    */
    FILE* archivo = fopen("archivo.txt","r");
    char cadena[50];
    //fscanf(archivo, "%s", cadena);
    //fprintf(stdout, "%s\n", cadena);
    fgets(cadena, sizeof(cadena), archivo);
    fprintf(stdout, "%s\n", cadena);
    fclose(archivo);

    /*
    FILE* archivoBinario = fopen("ejemplo.txt", "wb");
    char mensaje[50] = "Ejemplo archivo Binario";
    fwrite(mensaje, sizeof(mensaje), 1, archivoBinario);
    fclose(archivoBinario);
    */

    FILE* archivoBinario = fopen("ejemploBin.dat", "wb");
    char mensaje[11] = "Hola Mundo";
    fwrite(mensaje, sizeof(mensaje), 1, archivoBinario);
    fclose(archivoBinario);


    return 0;
}