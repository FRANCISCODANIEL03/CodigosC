#include <stdio.h>
/*Codigo que suma dos numeros flotantes e imprime el resultado*/
int main(){
    float a ;
    float A ;
    puts("Ingresa un numero con decimales");
    scanf("%f", &a);
    puts("Ingresa un otro numero con decimales");
    scanf("%f", &A);
    printf("La suma de estos numeros es: %f\n", a + A);

    printf("\n");
    return 0;
}