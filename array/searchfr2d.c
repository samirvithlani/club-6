#include<stdio.h>

void main(){

    int a[3][3],row=0,col=0,flag=0,selm;

    printf("\n enter elements of an array :");

    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n enter element for search :");
    scanf("%d",&selm);


    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){

            printf(" %d",a[i][j]);
        }
        printf("\n");\
    }



    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){

            if(selm == a[i][j]){

                flag = 1;
                row = i;
                col =j;
            }
        }
    }



     if(flag ==1){

            printf("\n %d found in matrix at %d row and %d col",selm,row,col);
        }
        else{

            printf("\n %d not found in matrix",selm);
        }



/*
1 2 3
4   6
7 8 9

1 0 3
0 5 0
7 0 9
*/



}
