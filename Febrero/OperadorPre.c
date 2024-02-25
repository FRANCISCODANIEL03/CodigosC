#include <stdio.h>
/*Segundo codigo que explica en inc/dec*/
int main(){
    int var = 1;
    int con = 1;

    //Es equivalente a var = var+1;
    printf("%d \n",++var);
    printf("%d \n",var);

    //Es equivalente a con = con-1
    printf("%d \n",--con);
    printf("%d \n",con);

    return 0;
}