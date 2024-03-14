#include <stdio.h>

int main(){
   int  A[]={3,5,6,8,4,7,8,5,3,1};
   int  B[]={3,4,6,8,9,1,2,3,0,9};
   float q = A[3] %(B[2]/2);
   float w = B[A[1]] - A[9];
   float e = A[0] + A[1+2];
   float r = A[5] + B[5];
   float t = (A[3]/B[2])/2;
   printf("Operacion1 = %.2f\n Operacion2 = %.2f\n Operacion3 = %.2f\n",q,w,e);
   printf("Operacion4 = %.2f\n Operacion5 = %.2f\n",r,t);

    return 0;
}