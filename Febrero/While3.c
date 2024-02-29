#include <stdio.h>

int main(){
    int num = 1,num2,num3;
    puts("Ingresa el limite del rango: 0 a : ");
    scanf("%d", &num2);
    puts("Ingresa el numero del que van a aparecer sus multiplos");
    scanf("%d", &num3);
    while(num < num2){
        if(num %num3 == 0){
            printf("%d, ",num);
        }
        num++;
    }
    return 0;
}