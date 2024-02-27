#include <stdio.h>
/*Codigo que suma un numero, incrementando el mismo numero */
int main(){
    int una_variable;
    una_variable = 3;
    una_variable = una_variable + 5;
    una_variable ++;

    printf("La suma de %d + %d es = %d",3,5, una_variable);

    printf("\n");
    return 0;
}