#include <stdio.h>
#include <math.h>

struct Punto{
    float x;
    float y;
    Punto(){x = 0 ; y = 0;}
    Punto(float a){x = a ; y = a;}
    Punto(float a, float b){x = a ; y = b;}
};

struct Recta{
    float m;
    float b;
};

float distanciaDosPuntos(Punto a, Punto b);
bool perteneceRecta(Recta r, Punto p);

int main(){
    int opcion = 0;
    float distancia;
    bool pertenece;
    Punto p1(2.5, 7.2);
    Punto p2(4.5, 3.6);
    Punto p3(1.7);
    printf("%f - %f\n", p3.x, p3.y);
    Recta r1 = {3.6, 8.9};

    printf("Bienvenido! Seleccione su opción:\n");
    printf("1.- Calcular distancia entre dos puntos.\n");
    printf("2.- Comprobar si el punto pertenece a la recta.\n");
    scanf("%d", &opcion);

    switch(opcion){
        case 1: distancia = distanciaDosPuntos(p1, p2);
                printf("La distancia es de: %.2f\n", distancia);
                break;
        case 2: pertenece = perteneceRecta(r1, p1);
                printf("%d\n", pertenece);
                break;
        default: printf("Opción ingresada no es válida\n");
    }
    return 0;
}

//sqrt(EXPRESION)
//pow(EXPRESION, EXPONENTE)
float distanciaDosPuntos(Punto a, Punto b){
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2)); 
}

bool perteneceRecta(Recta r, Punto p){
    // y = m*x + b;
    return (p.y == r.m * p.x + r.b);
}
