#include <stdio.h>

// Pedir Lados
void pedirLados(int* lado1, int* lado2, int* lado3);
// Verificar si es un triángulo
bool verificarTriangulo(int lado1, int lado2, int lado3);
// Clasificar el triángulo (equilátero - isósceles - escaleno)
void clasificarTriangulo(int lado1, int lado2, int lado3);

int main(){
    int a, b, c;
    pedirLados(&a, &b, &c);
    if(verificarTriangulo(a, b, c)){
        printf("Los lados conforman un triángulo!\n");
        clasificarTriangulo(a, b, c);
    } else {
        printf("Los lados no conforman un triángulo!\n");
    }
    return 0;
    
}

void pedirLados(int* lado1, int* lado2, int* lado3){
    printf("Ingrese la medida del primer lado:\n");
    scanf("%d", lado1);
    printf("Ingrese la medida del segundo lado:\n");
    scanf("%d", lado2);
    printf("Ingrese la medida del tercer lado:\n");
    scanf("%d", lado3);
}

bool verificarTriangulo(int lado1, int lado2, int lado3){
    if( (lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1) ){
        return true;
    } else {
        return false;
    }
}

void clasificarTriangulo(int lado1, int lado2, int lado3){
    // EQUILÁTERO
    if((lado1 == lado2) && (lado2 == lado3)){
        printf("El triángulo es equilátero!\n");
    } else if((lado1 == lado2) || (lado2 == lado3) || (lado1 == lado3)){
        //ISÓSCELES
        printf("El triángulo es isósceles!\n");
    } else {
        // ESCALENO
        printf("El triángulo es escaleno!\n");
    }   
}
