#include<stdio.h>

void main(){

    
    ///& pointer own address
    ///without & copied address
    //*p value...
    int a = 10;
    int *p;

     p= &a;
    

    printf("\n value of a = %d",a);
    printf("\n value of p = %d",*p);
    printf("\n address of a = %u",&a);
    printf("\n address of p = %u",p);


}