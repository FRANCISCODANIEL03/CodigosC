#include <stdio.h>
#define PI 3.1415926
/*Codigo que obtiene el area de un circulo pidiendo el diametro*/
int main(){
    double Area,Radio;
    int Diam;
    puts("Ingresa el diametro del circulo");
    scanf("%d", &Diam);
    Radio = Diam/2;
    Area = PI*(Radio*Radio);

    printf("El Area del circulo con diametro de %d metros es = %.3f",Diam,Area);
    return 0;
}