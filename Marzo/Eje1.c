#include <stdio.h>

int main(){
    int x;
    puts("Escribe el numero para la tabla de multiplicar ");
    scanf("%d", &x);
    int i;
    puts("Ingresa en que orden lo deseas imprimir");
    puts("1.-Ascendente");
    puts("2.-Descendete");
    scanf("%d", &i);
    if(i == 1){
        int a = 0;
        while(a < 1000){
            printf("%d * %d = %d\n",x,a,a*x);
            a++;
        }
    }else if(i == 2){
        int a = 1000;
        while(a > 0){
            printf("%d * %d = %d \n",x,a,a*x);
            a--;
        }
    }else{
        puts("opcion invalida");
    }
    return 0;
}