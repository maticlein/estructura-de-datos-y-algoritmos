#include <stdio.h>
#define PI 3.14159

void ingresoDatos(float* r, float* h);
void calculoSupVol(float* vol, float* sup, float r, float h);
void entregarResultados(float vol, float sup);

int main() {
  float r, h, vol, sup;
  
  // Subprograma 1
  ingresoDatos(&r, &h);
  
  // Subprograma 2
  calculoSupVol(&vol, &sup, r, h);
  
  // Subprograma 3
  entregarResultados(vol, sup);
  
  return 0;
}

void ingresoDatos(float* r, float* h){
    printf("ingrese radio y alto: \n");
    scanf("%f %f", r, h);
}

void calculoSupVol(float* vol, float* sup, float r, float h){
    *sup = 2 * PI * r * r + 2 * PI * r * h;
    *vol = PI * r * r * h;
}

void entregarResultados(float vol, float sup){
    printf("la superficie es: %.3f\n" , sup);
    printf("el volumen es: %.3f\n", vol);
}