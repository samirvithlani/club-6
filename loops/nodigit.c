#include<stdio.h>

void main(){

    int no,rem,count=0;
    printf("\n enter no");
    scanf("%d",&no);

    ///123 ->3 4578 -4

    while(no!=0){

        rem = no % 10;
        no = no / 10;
        count++;

    }

    printf("\n no of digit = %d",count);



}
