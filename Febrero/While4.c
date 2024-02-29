#include <stdio.h>

int main(){
    int num = 1,num2,num3;
    while(num < 1000){
        num2 =num %2;
        num3 = num %7;
        if(num2 == 0 && num3 ==0){
            printf("%d, ",num);
        }
        num++;
    }
    return 0;
}