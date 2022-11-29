//array is a group of similar kind of data type....
//array stored data in indexing manner
//index always starts with 0

#include<stdio.h>



void main(){

    //we need to specify size of an array
    //int a[10]={10,20,30,40,50,60};
    int a[10],sum=0;
    printf("\n enter elements of an array");
    for(int i=0;i<6;i++){
        printf("\n enter %d element",i);
        scanf("%d",&a[i]);
    }

    for(int i=0;i<6;i++){
        printf("\n index = a[%d] position = %d element = %d",i,i+1,a[i]);
        //0 = 0 + 100 = 100
        //100 = 100 + 20 = 120
        sum = sum + a[i];
    }
    printf("\n sum = %d",sum);
    /*
    printf("\n 0th element = %d",a[0]);
    printf("\n 0th element = %d",a[1]);
    printf("\n 0th element = %d",a[2]);
    printf("\n 0th element = %d",a[3]);
    printf("\n 0th element = %d",a[4]);
    */



}
