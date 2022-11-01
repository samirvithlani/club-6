#include<stdio.h>
#include<stdlib.h>

void main(){

    int choice,no1,no2,sum=0,sub=0,mul=1;
    start:
    printf("\n Enter your choice !");
    printf("\n Press 1 for Add");
    printf("\n Press 2 for sub");
    printf("\n Press 3 for mul");
    printf("\n Press 4 for div");
    printf("\n enter 5 for exit");
    scanf("%d",&choice);

    switch(choice){

    case 1:
                printf("\n enter no1 :");
                scanf("%d",&no1);
                printf("\n enter no2 :");
                scanf("%d",&no2);
                int sum = no1 + no2;
                printf("\n sum = %d",sum);
                //goto start;

    break;
    case 2:
                printf("\n enter no1 :");
                scanf("%d",&no1);
                printf("\n enter no2 :");
                scanf("%d",&no2);
                int sub = no1 -no2;
                printf("\n sum = %d",sub);
                //goto start;



    break;


    case 3:
                printf("\n enter no1 :");
                scanf("%d",&no1);
                printf("\n enter no2 :");
                scanf("%d",&no2);

                int mul = no1  *no2;
                printf("\n sum = %d",mul);
                //goto start;



    break;

    case 5:
            printf("\n EXIT :");
            exit(0);
    break;

    default:
                printf("\n enter valid choice");
               // goto start;
    break;

    }
    goto start;


}
