#include <stdio.h>

int main(){
    float a,b,c,d,e;
    a = 5;
    b = 2.0 -(1.0/4.0);
    c = 1 + (2.0/b);
    d = 1.0/c;
    e = a + 2/d;
    printf("= %f",e);
}