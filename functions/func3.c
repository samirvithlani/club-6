#include<stdio.h>

int sum(int a,int b,int c){
///local variable...

    return a + b +c;
}

float avg(){

    int no1,no2,no3;
    ///local
    printf("\n enter no1 ");
    scanf("%d",&no1);
    printf("\n enter no2 ");
    scanf("%d",&no2);
    printf("\n enter no3 ");
    scanf("%d",&no3);
    int ans = sum(no1,no2,no3);

    return ans /3;

}


void main(){

    float x = avg();
    printf("\n x = %f",x);

}
