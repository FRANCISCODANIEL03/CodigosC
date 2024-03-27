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
    int p = 1;
    while(n-- > 0) p = p * base;
    return p;
}