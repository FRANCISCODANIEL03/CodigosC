#include <stdio.h>
#define PI 3.1416

int main(){
    float perim,radio;
    int dos = 2;
    printf("Calcula el perimetro de una circunferencia\n");
    printf("Indique el tamaño de radio de la circunferencia\n");
    scanf("%f", &radio);
    perim = dos*PI*radio;
    printf("El perimetro de la circunferencia es %.3f\n",perim);
    printf("Valores utilizados para calcular el perimetro:\n");
    printf("Constante PI=%.4f, valor de dos = %d, radio = %.3f",PI,dos,radio);
    return 0;

    
}
