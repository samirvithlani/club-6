#include<stdio.h>


void main(){

    int i;
    for(i=1;i<=20;i++){

        ///i =2 %2 ==0 true
        if(i%2==0){

            printf("\n even = %d",i);
        }
        else{
            printf("\n odd = %d",i);
        }
    }

}
