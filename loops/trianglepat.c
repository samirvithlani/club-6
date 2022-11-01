#include<stdio.h>

void main(){

    for(int i=1;i<=4;i++){

        printf("\n");

        //5 3 5 4 2
        for(int j=5;j>i;j--){
            printf(" ");
        }



        //2 //31 3
        for(int j=1;j<=i;j++){

            printf(" %d",i);
        }









    }

}
