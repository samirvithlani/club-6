//array is a group of similar kind of data type....
//array stored data in indexing manner
//index always starts with 0

#include<stdio.h>



void main(){


    int a[10],max;

    printf("\n enter elements of an array");
    for(int i=0;i<6;i++){
        printf("\n enter %d element",i);
        scanf("%d",&a[i]);
    }
    max= a[0];

    for(int i=0;i<6;i++){
        if(a[i]<max){

              max = a[i];
              //max = 900
        }


    }
    printf("\n max = %d",max);





}

