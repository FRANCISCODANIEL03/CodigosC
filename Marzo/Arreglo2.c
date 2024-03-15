#include <stdio.h>
/*Codigo que imprime la tabl del 2*/
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