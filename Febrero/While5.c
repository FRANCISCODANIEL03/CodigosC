#include <stdio.h>

int main(){
    int num = 1,num2;
    while(num < 100){
        num2 =num %7;
        if(num2 != 0){
            printf("%d, ",num);
        }
        num++;
    }
    return 0;
}