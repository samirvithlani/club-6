#include<stdio.h>


void main(){

    int k=1;
    for(int i=1;i<=4;i++){
//1 t
//2 t
//3 t
//4 t
//5 F

        for(int j=1;j<=i;j++)
        {
            //1 t
            //1 t
            printf(" %d",k); //1
                             //2 3
                             //4 5 6
                             //7 8 9 10

            k++; //2 3 4 5 7 11
        }
        printf("\n");
    }

}
