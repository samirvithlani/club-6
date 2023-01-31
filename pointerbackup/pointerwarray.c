#include<stdio.h>

void main(){

    //index --> 
    int a[5]={1,2,3,4,5};
    printf("\n address of array = %u",&a);
    for(int i=0;i<5;i++){
        printf("\n value of a[%d] = %d",i,a[i]);
        printf("\n address of a[%d] = %u",&a[i]);
    }

    //copy array using pointer
    int *p;
    p = &a[0];
    printf("\n ---------------------");
    printf("\n address of p = %u",p);

    for(int i=0;i<5;i++){
        printf("\n value of p[%d] = %d",i,*(p+i));
        printf("\n address of p[%d] = %u",(p+i));
    }

}