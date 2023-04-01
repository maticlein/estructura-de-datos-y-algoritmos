#include <stdio.h>
#include <string.h>

void algoritmoQuickSort(int a[], int primero, int ultimo);

int main(){
	int numeros[] = {10, 7, 15, 20, 1};
	int primero = 0;
	int ultimo = 4;
	
	printf("El arreglo original es: ");
	for(int i = 0; i<5;i++){
		printf("[%d] ",numeros[i]);
		}
	printf("\n");
	
	algoritmoQuickSort(numeros, primero, ultimo);
	
	printf("El arreglo ordenado es: ");
	for(int i = 0; i<5;i++){
		printf("[%d] ",numeros[i]);
		}
	printf("\n");
	
	return 0;
}

void algoritmoQuickSort(int a[], int primero, int ultimo){
	int i, j, central, tmp, pivote;
	central = (primero + ultimo)/2;
	pivote = a[central];
	i = primero;
	j = ultimo;
	do{
		while(a[i] < pivote){
			i++;
			}
		while(a[j] > pivote){
			j--;
			}
		if(i <= j){
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++;
			j--;
			} 
		} while(i <= j);
		if(primero < j){
			algoritmoQuickSort(a, primero, j);
			}
		if(i < ultimo){
			algoritmoQuickSort(a, i, ultimo);
			}
	}
