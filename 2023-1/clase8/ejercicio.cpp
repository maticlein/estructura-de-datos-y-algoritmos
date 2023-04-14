#include <stdio.h>

int main(){
    int num;
    FILE* lectura = fopen("./data.dat", "r");
    // feof(lectura) == 0
    while(!feof(lectura)){
        fscanf(lectura, "%d ", &num);
        printf("%d\n", num);
    }
    fclose(lectura);
    return 0;
}