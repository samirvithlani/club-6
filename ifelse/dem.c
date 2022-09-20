#include<stdio.h>

void main(){

    int height,choice,sqarea=1;
    float pi = 3.14,circlearea=1,r;

    printf("\n enter 1 for sq..");
    printf("\n enter 2 for sq..");
    printf("\n enter 3 for sq..");
    scanf("%d",&choice);

    if(choice==1){

        printf("\n enter height");
        scanf("%d",&height);
        sqarea = height * height;
        printf("\n sqarea = %d",sqarea);
    }
    else if(choice ==2){

        printf("\n enter R");
        scanf("%f",&r);
        circlearea = pi *(r*r);
        printf("\n %f",circlearea);
    }
    else if(choice ==3){

    }





}
