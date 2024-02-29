#include <stdio.h>

int main(){
    int num = 1,num2;
    while(num < 1000){
        num2 =num %3;
        if(num2 == 0){
            printf("%d, ",num);
        }
        num++;
    }
    return 0;
}