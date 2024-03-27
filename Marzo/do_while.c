#include <stdio.h>

int main(){
    int num = 0,suma = 0,i = 0;
    do{
        printf("Un numero : ");
        scanf("%d", &num);
        suma = suma + num;
        i++;
    }while(i < 5);
    printf("suma es: %d",suma);
    return 0;
}