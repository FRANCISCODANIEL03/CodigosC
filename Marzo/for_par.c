#include <stdio.h>

int f(int m, int n);
int main(){
    int i;
    printf("Prueba: funcion entero elevado a potencia\n");
    for (i = 0; i < 10; i++){
        printf("2^%d es: %d   ",i,f(2,i));
        printf("3^%d es: %d\n",i,f(3,i));
    }
    return 0;
}
int f(int base,int n){
    int i,p = 1;
    for (i = 1; i <= n; i++){
        p = p * base;
    }
    return p;
}