#include <stdio.h>
#include <string.h> // Librería para manejo de cadenas de caracteres

int main(){
    // CARACTER VA ENTRE COMILLAS SIMPLES 'a'
    // CADENA VA ENTRE COMILLAS DOBLES "programacion"
    char cadena[11] = "hola mundo";
    printf("%s\n", cadena);
    cadena[0] = 'H';
    printf("%c %c\n", cadena[0], cadena[5]);
    printf("%s\n", cadena);

    char ejemplo[20];
    printf("Ingrese una frase:\n");
    // scanf("%[^\n]s", ejemplo); // Opción 1
    // gets(ejemplo); // Opción 2
    fgets(ejemplo,sizeof(ejemplo), stdin); // Opción 3
    printf("%s\n", ejemplo);

    char nombre1[15] = "Alfredo";
    char nombre2[15];
    char nombre3[15] = "Cristian";
    char total[50];
    strcpy(nombre2, nombre1); // COPIAR
    printf("%s\n", nombre2);

    // COMPARAR
    if(strcmp(nombre1, nombre2) == 0){
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas NO son iguales.\n");
    }

    // CONCATENAR
    strcat(total,nombre1); //nombre1
    strcat(total,nombre3); //nombre1nombre3
    printf("%s\n", total);


    return 0;
}