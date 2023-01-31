#include<stdio.h>

void main(){

    int a =100;
    int *p;
    p = &a;
    //copied address of a to p
    printf("\n address of p = %u",p);
    p = p+1;
    //incremented p by 1
    printf("\n address of p = %u",p);


}