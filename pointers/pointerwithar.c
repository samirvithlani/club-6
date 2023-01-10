#include<stdio.h>

void main(){

    int a = 10;

    int *p = &a;

    printf("\n value of a = %d",a);
    printf("\n value of p = %d",*p);
    printf("\n address of a = %u",&a);
    printf("\n address of p = %u",p);

    //*p = *p + 10;
    p = p + 2;

    
    //printf("\n value of p = %d",*p);
    printf("\n address of p = %u",p);
    




}