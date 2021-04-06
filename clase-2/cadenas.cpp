#include <stdio.h>
#include <string.h>

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
    //scanf("%[^\n]s", ejemplo);
    //gets(ejemplo);
    fgets(ejemplo,sizeof(ejemplo), stdin);
    printf("%s\n", ejemplo);

    char nombre1[15] = "Mauricio";
    char nombre2[15];
    char nombre3[15] = "Cristopher";
    char total[50];
    strcpy(nombre2, nombre1); // COPIAR
    printf("%s\n", nombre2);

    // COMPARAR
    if(strcmp(nombre1, nombre2) == 0){
        printf("OK\n");
    } else {
        printf("NO\n");
    }

    strcat(total,nombre1); // CONCATENAR
    strcat(total,nombre3);
    printf("%s\n", total);


    return 0;
}