#include <stdio.h>
#include <string.h>

int main(){
    char nombres[10][50] = {' '};
    int opcion = 0;
    int indiceUsuario = 0;

    char nombreEjemplo[10] = "Luis";
    printf("Hola %s!\n", nombreEjemplo);
    strcpy(nombreEjemplo, "Lucho");
    printf("Hola %s!\n", nombreEjemplo);

    while(opcion != 5){
        printf("1 - Registrar usuario\n");
        printf("2 - Comprobar a Alejandro Yañez\n");
        printf("3 - Eliminar usuario\n");
        printf("4 - Listar usuarios\n");
        printf("5 - Salir\n");

        printf("Ingrese su opción: ");
        scanf("%d", &opcion);

        switch(opcion){
            case 1: getchar();
                    printf("Ingrese el primer usuario: ");
                    scanf("%[^\n]s", nombres[indiceUsuario]);
                    printf("Hola %s, bienvenido!!\n", nombres[indiceUsuario]);
                    indiceUsuario++;
                    break;
            case 2: if(strcmp("Alejandro Yañez", nombres[0]) == 0){
                        printf("Alejandro Yañez ESTÁ en los contactos.\n");
                            } else {
                                printf("Alejandro Yañez NO ESTÁ en los contactos.\n");
                            }
                    break;
            case 3: break;
            case 4: strcpy(nombres[0], "Juan");
                    strcpy(nombres[1], "Marco");
                    strcpy(nombres[2], "Diego");
                    for(int i = 0 ; i < sizeof(nombres)/sizeof(nombres[0]) ; i++){
                        printf("Contacto %d -> %s\n", i + 1, nombres[i]);
                    }
            case 5: printf("Hasta luego!\n");
                    break;
            default: printf("La opción ingresada no es válida, ingrese nuevamente.\n");
        }

    }
    return 0;
}