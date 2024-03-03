#include <stdio.h>
/*Codigo que calcula el area de un circulo*/
int main(){
    double r;
    double pi = 3.1416;
    puts("Ingresa el radio del circulo");
    scanf("%lf", &r);
    double area = pi * r * r;

    printf("El area del circulo es: %.4lf\n",area);

    printf("\n");
    return 0;

}