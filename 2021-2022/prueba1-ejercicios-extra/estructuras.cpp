#include <stdio.h>
#include <math.h>
 
struct Punto{
	float x;
	float y;
	Punto(){x = 0 ; y = 0;}
	Punto(int a){x = a ; y = a;}
	Punto(int a, int b){x = a ; y = b;}
	};

struct Recta{
	float m;
	float b;
	Recta(){m = 0 ; b = 0;}
	Recta(int a){m = a ; b = a;}
	Recta(int a, int c){m = a ; b = c;}
	};

float distancia(Punto p1, Punto p2);
bool perteneceRecta(Recta r, Punto p);

int main(){
	Punto a(5,23);
	
	Recta b(3,8);
	
	/*
	float resultado = distancia(a,b);
	printf("DISTANCIA: %f\n", resultado);
	*/
	
	if(perteneceRecta(b, a)){
		printf("El punto sí pertenece a la recta.\n");
		} else {
			printf("El punto NO pertenece a la recta.\n");
			}
	
	return 0;
	}

float distancia(Punto p1, Punto p2){
	return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
	}
	
bool perteneceRecta(Recta r, Punto p){
	return (p.y == r.m*p.x + r.b);
	}


