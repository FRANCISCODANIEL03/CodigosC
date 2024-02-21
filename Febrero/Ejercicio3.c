#include <stdio.h>
#define PI 3.1415926

int main(){
    double Area,Radio;
    int Diam;
    Diam = 10;
    Radio = Diam/2;
    Area = PI*(Radio*Radio);

    printf("El Area del circulo con radio de %d metros es = %f",Diam,Area);
    return 0;
}