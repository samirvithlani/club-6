#include<stdio.h>

void main(){

    //stack
    ///4 bytes
    int a = 100;
    int b = 20;
    int *p;

    //scanf("%d",&a)
    printf("\n value of a = %d",a);
    printf("\n address of a = %u",&a);
    printf("\n value of b = %d",b);
    printf("\n address of b = %u",&b);

    //address of copyinf a to p
    p = &a;
    printf("\n value of p = %d",*p);
    printf("\n address of p = %u",p);
    printf("\n address of p = %u",&p);



}