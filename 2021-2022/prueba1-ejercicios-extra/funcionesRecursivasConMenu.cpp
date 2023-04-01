#include <stdio.h>
#include <string.h>

int numDivisores(int numero, int divisor);
bool par(int num);
bool impar(int num);
bool esPrimo(int num, int divisor);
void cadenaMayusculas(char cadena[],int indice);
void invertirCadena(char cadena[], int indice);

int main(){
	int opcion;
	int numero;
	char cadena[50];
	do{
		printf("MENÚ FUNCIONES\n");
		printf("\n");
		printf("Indique que función quiere ejecutar:\n");
		printf("1.- Cantidad de divisores de un número.\n");
		printf("2.- Comprobar si un número es par.\n");
		printf("3.- Comprobar si un número es primo.\n");
		printf("4.- Convertir una cadena de caracteres a letras mayúsculas.\n");
		printf("5.- Invertir una cadena de caracteres.\n");
		printf("6.- Salir.\n");
		
		scanf("%d",&opcion);
		
		switch(opcion){
			case 1: printf("Ingrese el número del cual quiere buscar divisores:\n");
					scanf("%d",&numero);
					printf("La cantidad de divisores de %d es: %d\n", numero, numDivisores(numero, numero));
					break;
			case 2: printf("Ingrese el número que quiere comprobar si es par:\n");
					scanf("%d",&numero);
					if(par(numero) == 1){
						printf("El %d es par.\n",numero);
						} else{
							printf("El %d es impar.\n",numero);
							}
					break;
			case 3: printf("Ingrese el número que quiere comprobar si es primo:\n");
					scanf("%d",&numero);
					if(esPrimo(numero,2) == 1){
						printf("El %d es primo.\n",numero);
						} else{
							printf("El %d no es primo.\n",numero);
							}
					break;
			case 4: printf("Ingrese la cadena que quiere transformar a mayúsculas:\n");
					fflush(stdin);
					scanf("%[^\n]s",cadena);
					printf("La cadena original era: [%s]\n",cadena);
					cadenaMayusculas(cadena,0);
					printf("La cadena modificada es: [%s]\n",cadena);
					break;
			case 5: printf("Ingrese la cadena que quiere invertir:\n");
					fflush(stdin);
					scanf("%[^\n]s",cadena);
					printf("La cadena original era: [%s]\n",cadena);
					invertirCadena(cadena,0);
					printf("La cadena modificada es: [%s]\n",cadena);
					break;
			case 6: printf("Hasta luego, gracias por utilizar el programa!");
					break;
			default: printf("La opción ingresada no es válida\n");
					 break;
			}
		
		} while(opcion!=6);
	return 0;
}

int numDivisores(int numero,int divisor){
	if(divisor == 1){
		return 1;
		}	
	if(numero%divisor == 0){
		return 1 + numDivisores(numero,divisor-1);
		} else {
			return numDivisores(numero,divisor-1);
			}
	}

bool par(int num){
	if(num == 0){
		return true;
		} else{
			return impar(num-1);
			}
	}

bool impar(int num){
	if(num == 0){
		return false;
		} else {
			return par(num-1);
		}
	}

bool esPrimo(int num, int divisor){
	if(num/2 < divisor){
            return true;
        } else {
            if(num%divisor==0){
                return false;
            } else {
                return esPrimo(num, divisor+1);
            }
        }
	}
	
void cadenaMayusculas(char cadena[], int indice){
	if(indice>strlen(cadena)){
		return;
		}else{
			if(cadena[indice]>=97 && cadena[indice]<=122){
				cadena[indice]-=32;
			}
			return cadenaMayusculas(cadena,indice+1);
			}
	}	

void invertirCadena(char cadena[], int indice){
	if(indice>=strlen(cadena)/2){
		return;
		}else{
			char aux;
			aux = cadena[indice];
			cadena[indice] = cadena[strlen(cadena)-1-indice];
			cadena[strlen(cadena)-1-indice] = aux;
			return invertirCadena(cadena,indice+1);
			}
	}	
