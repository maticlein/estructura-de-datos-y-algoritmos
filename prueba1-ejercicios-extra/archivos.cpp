#include <stdio.h>

int main(){
	FILE* arch = fopen("/Users/Mati/Desktop/ejercicioArchivos/data.dat","r");
	FILE* arch2 = fopen("/Users/Mati/Desktop/ejercicioArchivos/numeros.txt", "w");
	
	int x;
	
	while(!feof(arch)){
	fscanf(arch,"%d ",&x);
	printf("%d\n",x);
	fprintf(arch2, "%d -> ",x);
	
	if(x%2 == 0){
		fprintf(arch2, "PAR - ");
		}else {
			fprintf(arch2, "IMPAR - ");
			}
	
	if(x == 1 || x == 2){
		fprintf(arch2,"PRIMO\n");
		}else{
	
	for(int i = x-1; i>1 ; i--){
		if(x%i == 0){
			fprintf(arch2,"NO PRIMO\n");
			break;
			}
		if(i == 2){
			fprintf(arch2,"PRIMO\n");
			break;
			}	
		}
	}		
		}
		
	fclose(arch);
	fclose(arch2);
	return 0;
	}
