#include<stdio.h>

void main(){

    int no = 123,sum=0,rem=0;

    while(no!=0){

        rem = no % 10;
        sum = sum + rem;
        no = no /10;
    }

printf("\n sum = %d",sum);

}

