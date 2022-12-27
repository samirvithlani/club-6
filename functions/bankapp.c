#include<stdio.h>

int withdraw(int totalbal,int wamount){

    int netbal = totalbal - wamount;
    return netbal;
    ///9000
}


int deposit(int totalbal,int damount){

    int netbal = totalbal + damount;
    return netbal;
}

void main(){

    int choice,netbal=10000,wamount,damount;
    do{
    printf("\n *****WELCOME TO ABCD BANK ******");
    printf("\n PRESS 1 FOR WITHDRAW");
    printf("\n PRESS 2 FOR DEPOSIT");
    printf("\n PRESS 3 FOR EXIT !!");
    scanf("%d",&choice);

    switch(choice){

    case 1:
                printf("\n Welcome to withdraw process \n withdraw process start");
                printf("\n enter withdraw amount");
                scanf("%d",&wamount);

                ///10000 = 10000,1000 = 9000
                ///9000
                netbal = withdraw(netbal,wamount);
                printf("\n withdraw done!!!");
                printf("\n after withdraw netbal = %d",netbal);
    break;

    case 2:
                printf("\n Welcome to deposit process \n deposit process start");
                printf("\n enter deposit amount");
                scanf("%d",&damount);

                netbal = deposit(netbal,damount);

                printf("\n deposit done!!!");
                printf("\n after deposit netbal = %d",netbal);
        break;

    default:

        break;


    }
    }while(choice!=3);




}
