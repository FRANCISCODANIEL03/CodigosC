#include <stdio.h>

int main(){
    int num = 1,num2,num3;
      puts("Ingresa el limite del rango: 0 a : ");
    scanf("%d", &num2);
    while(num <= num2){
        printf("%d, ",num);
        num++;
    }
   return 0;
}
