/*realizar programa que los calculos y muestre los resultados

(((1/3)+(3/5)+(1/30)))*/
#include <stdio.h>

int main(){
    float a,b,c,d,e;
    a = 1.0/3.0;
    b = 3.0/5.0;
    c = 1.0/30.0;
    d = 23.0/30.0;
    e = a + b + c / d;
    printf("= %f",e);
    return 0;
}
