#include <stdio.h>

int main(){
    int num = 1,num2,num3,num4;
     puts("Ingresa el limite del rango: 0 a : ");
    scanf("%d", &num2);
    puts("Ingresa el primer numero del que no van a aparecer sus multiplos");
    scanf("%d", &num3);
    puts("Ingresa el segundo numero del que no van a aparecer sus multiplos");
    scanf("%d", &num4);
    while(num <= num2){
        if(num %num3 != 0 && num %num4 !=0){
            printf("%d, ",num);
        }
        num++;
    }
    return 0;
}