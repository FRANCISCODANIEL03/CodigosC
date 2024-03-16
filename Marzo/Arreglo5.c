#include <stdio.h>
/*Codigo que pide el tamaño del vector lo llena y mustra la multiplicacion
de todos los numeros asi como el promedio*/
int main(){
    int a;
    puts("Ingresa el tamaño del vector");
    scanf("%d", &a);
    float vec[a];
    int i = 0;
    double mult = 1;
    double sum = 0;
    if(a == 0){
        puts("El valor del vector es igual a cero no es posible llenarlo");
    }
    else{
        while(i < a){
        printf("Ingresa el valor %d \n",i + 1);
        scanf("%f", &vec[i]);
        mult = vec[i] * mult;
        sum = vec[i] + sum;
        i++;
        }
    printf("La multiplicacion de todos los elementos es = %.3f\n",mult);
    printf("El promedio de todos los elemntos es = %.3f\n",sum / a);
    }
    return 0;
}