#include <stdio.h>

int main(){
    int arreg[100];
    int i = 99;
    int r = 0;
    while(i > 0){
        arreg[i] = i ;
        printf("arreglo[%d] = %d\n",r,arreg[i]);
        r++;
        i--;
    }
    return 0;
}