#include <stdio.h>

int main(){
    int arreg[100];
    int i = 0;
    while(i <= 100){
        arreg[i] = i * 2;
        printf("2 * %d = %d\n",i,arreg[i]);
        i++;
    }
    return 0;
}