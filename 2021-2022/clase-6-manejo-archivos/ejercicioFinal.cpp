#include <stdio.h>

int main(){
    FILE* lectura = fopen("data.dat", "r");
    FILE* escritura = fopen("numeros.txt", "w");

    int x;

    while(!feof(lectura)){
        fscanf(lectura, "%d ", &x);
        printf("%d\n", x);
        fprintf(escritura, "%d -> ", x);

        // COMPROBAR SI ES PAR O IMPAR
        if(x%2 == 0){
            fprintf(escritura, "Par - ");
        } else {
            fprintf(escritura, "Impar - ");
        }

        // COMPROBAR SI ES PRIMO O NO PRIMO
        if((x == 1) || (x == 2)){
            fprintf(escritura, "Primo\n");
        } else {
            for(int i = x - 1 ; i > 1 ; i--){
                if(x%i == 0){
                    fprintf(escritura, "No Primo\n");
                    break;
                }
                if(i == 2){
                    fprintf(escritura, "Primo\n");
                    break;
                }
            }
        }
    }

    fclose(lectura);
    fclose(escritura);

    return 0;
}