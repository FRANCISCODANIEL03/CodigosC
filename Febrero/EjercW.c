#include <stdio.h>

int main(){
    int num = 1,cuad,cubo;
    while(num <= 500){
        cuad = num * num;
        cubo = cuad * num;
        printf("%d, %d, %d\n",num,cuad,cubo);
        num++;
        
    }
}