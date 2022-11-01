#include<stdio.h>

void main(){

    int no,rem,sum=0,mul=1;
    printf("\n enter no");
    scanf("%d",&no);


    int temp = no;

    ///123 1 + 2 + 3 =6
    while(no!=0){
        rem = no %10 ;
        //sum = sum +(rem*rem*rem);
        sum = sum +rem;
        mul  = mul * rem;
        no = no /10;
    }

    if(sum==temp){

        printf("\n no is an armstrong !");

    }
    else{
        printf("\n not");
    }

    printf("\n sum of digit =%d",sum);




}
